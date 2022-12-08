/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:51 by slammari          #+#    #+#             */
/*   Updated: 2022/12/08 09:05:42 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form() {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& p) : Form(p) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& p)
{
	Form::operator=(p);
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