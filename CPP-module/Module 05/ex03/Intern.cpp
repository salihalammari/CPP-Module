/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:37 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 01:38:39 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern& i)
{
	static_cast<void>(i);
}

Intern& Intern::operator=(const Intern& i)
{
	static_cast<void>(i);
	return *this;
}

Form* Intern::CreateShrubberyCreationForm(const std::string& target)
{
	std::cout << "Intern creates shrubbery creation form. (" << target << ')' << std::endl;
	return new ShrubberyCreationForm(target);
}

Form* Intern::CreateRobotomyForm(const std::string& target)
{
	std::cout << "Intern creates robotomy request form. (" << target << ')' << std::endl;
	return new RobotomyRequestForm(target);
}

Form* Intern::CreatePresidentialPardonForm(const std::string& target)
{
	std::cout << "Intern creates presidential pardon form. (" << target << ')' << std::endl;
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(const std::string& name, const std::string& target)
{
	std::string form[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	Form *(Intern::*func_ptr[3])(const std::string &target) =
		{ &Intern::CreateShrubberyCreationForm, &Intern::CreateRobotomyForm, &Intern::CreatePresidentialPardonForm };
	for (int i = 0 ; i < 3 ; i++)
	{
		if (form[i] == name)
			return (this->*func_ptr[i])(target);
	}
	std::cout << "No form exists for the given name." << std::endl;
	return (NULL);
}
