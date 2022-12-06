/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:11 by slammari          #+#    #+#             */
/*   Updated: 2022/12/06 19:50:01 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm() {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& p) : AForm(p) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& p)
{
	AForm::operator=(p);
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& b) const
{
	if (!getSigned())
		throw NotSignedException();
	if (b.getGrade() > getGradeExec())
		throw GradeTooLowException();
	std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}