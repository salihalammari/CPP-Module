/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:02 by slammari          #+#    #+#             */
/*   Updated: 2022/12/06 20:04:57 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) :_name("unnamed"), _grade(GRADE_MIN)
{
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
	if (_grade < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy.getName()), _grade(copy.getGrade())
{
	if (_grade < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& assign)
{
	if (this != &assign)
	{
		const_cast<std::string&>(_name) = assign.getName();
		_grade = assign.getGrade();
	}
	return *this;
}

const std::string& Bureaucrat::getName(void) const
{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (_grade - 1 < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(AForm &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << '.' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " couldn't sign " << form.getName()
					<< " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm& form) const
{
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " cannot execute " << form.getName()
					<< " becuase " << form.getName() << " " << e.what() << std::endl;
	}
	
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade too high!!";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade too low!!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& copy)
{
	os << copy.getName() << ", bureaucrat grade " << copy.getGrade();
	return os;
}
