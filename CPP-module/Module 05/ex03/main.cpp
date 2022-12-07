/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:42 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 01:38:48 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	Form* rrf;

	std::cout << "===========ShrubberyCreationForm Creation Test===========" << std::endl;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	delete rrf;
	std::cout << std::endl;

	std::cout << "============RobotomyRequestForm Creation Test============" << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
	std::cout << std::endl;

	std::cout << "===========PresidentialPardonForm Creation Test===========" << std::endl;
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	delete rrf;
	std::cout << std::endl;

	std::cout << "===============UndefinedForm Creation Test===============" << std::endl;
	rrf = someRandomIntern.makeForm("undefined", "Bender");
	delete rrf;
	std::cout << std::endl;
	
	return 0;
}
