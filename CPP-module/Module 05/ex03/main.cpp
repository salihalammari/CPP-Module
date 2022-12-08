/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:42 by slammari          #+#    #+#             */
/*   Updated: 2022/12/08 09:02:34 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(void)
{
	Intern someRandomIntern;
	Form* rrf;

	std::cout << "===========ShrubberyCreationForm Creation Test===========" << std::endl;
	{
		try
		{
			Bureaucrat b1("b1", 150);
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
			rrf->beSigned(b1);
			b1.signForm(*rrf);
			b1.executeForm(*rrf);
		
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete rrf;
		std::cout << std::endl;
	}
	std::cout << "============RobotomyRequestForm Creation Test============" << std::endl;
	{
		try
		{
			Bureaucrat b2("b2", 50);
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			rrf->beSigned(b2);
			b2.signForm(*rrf);
			b2.executeForm(*rrf);
		
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete rrf;
	}
	std::cout << std::endl;
	std::cout << "===========PresidentialPardonForm Creation Test===========" << std::endl;
	{
		try
		{
			Bureaucrat b3("b3", 1);
			rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
			rrf->beSigned(b3);
			b3.signForm(*rrf);
			b3.executeForm(*rrf);
		
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete rrf;
	}
	std::cout << std::endl;
    
	return 0;
}
