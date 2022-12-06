/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:16 by slammari          #+#    #+#             */
/*   Updated: 2022/12/06 05:08:17 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm() {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& r) : AForm(r) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& r)
{
	AForm::operator=(r);
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
