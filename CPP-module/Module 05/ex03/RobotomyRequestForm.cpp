/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:56 by slammari          #+#    #+#             */
/*   Updated: 2022/12/08 09:05:30 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form() {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& r) : Form(r) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& r)
{
	Form::operator=(r);
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& b) const
{
	if (!getSigned())
		throw NotSignedException();
	if (b.getGrade() > getGradeExec())
		throw GradeTooLowException();
	srand(time(NULL));
	std::cout << "Drrrrrrrrrrrr..." << std::endl;
	if (rand() % 2)
		std::cout << getName() << " has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << getName() << " has been failed robotomize." << std::endl;
}