/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:19:57 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 01:39:11 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name ("no_name"), _signed(false), _grade_sign(GRADE_MIN), _grade_exec(GRADE_MIN) {}

AForm::~AForm(void) {}

AForm::AForm(const std::string& name, const int& grade_sign, const int& grade_exec)
	: _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (_grade_sign < GRADE_MAX || _grade_exec < GRADE_MAX)
		throw GradeTooHighException();
	if (_grade_sign > GRADE_MIN || _grade_exec > GRADE_MIN)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& f)
	: _name(f.getName()), _signed(false), _grade_sign(f.getGradeSign()), _grade_exec(f.getGradeExec())
{
	if (_grade_sign < GRADE_MAX || _grade_exec < GRADE_MAX)
		throw GradeTooHighException();
	if (_grade_sign > GRADE_MIN || _grade_exec > GRADE_MIN)
		throw GradeTooLowException();
}

AForm& AForm::operator=(const AForm& f)
{
	if (this != &f)
	{
		const_cast<std::string&>(_name) = f.getName();
		const_cast<int&>(_grade_exec) = f.getGradeExec();
		const_cast<int&>(_grade_sign) = f.getGradeSign();
		_signed = f.getSigned();
	}
	return *this;
}

const std::string AForm::getName(void) const
{
	return _name;
}

bool AForm::getSigned(void) const
{
	return _signed;
}

int AForm::getGradeSign(void) const
{
	return _grade_sign;
}

int AForm::getGradeExec(void) const
{
	return _grade_exec;
}

void AForm::beSigned(Bureaucrat b)
{
	if (b.getGrade() > _grade_sign)
		throw GradeTooLowException();
	_signed = true;
}

const char* AForm::GradeTooHighException::what(void) const throw()
{
	return "Grade too high!!";
}

const char* AForm::GradeTooLowException::what(void) const throw()
{
	return "Grade too low!!";
}

const char* AForm::NotSignedException::what(void) const throw()
{
	return "AForm not signed!!";
}

const char* AForm::FileErrorException::what(void) const throw()
{
	return "File error!!";
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << f.getName() << std::endl
	<< "Sign grade : " << f.getGradeSign() << std::endl
	<< "Execute grade : " << f.getGradeExec() << std::endl
	<<  "Signed : " << std::boolalpha << f.getSigned();
	return os;
}

