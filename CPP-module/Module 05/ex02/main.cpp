/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:07 by slammari          #+#    #+#             */
/*   Updated: 2022/12/08 09:03:05 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat b1("b1", 1);
	
		std::cout << "===========ShrubberyCreationForm Success Test===========" << std::endl;
		ShrubberyCreationForm s1("Shrubbery");
		b1.signForm(s1);
		b1.executeForm(s1);
		std::cout << std::endl;
		std::cout << s1 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat b3("b3", 150);
		
		std::cout << "============ShrubberyCreationForm Fail Test============" << std::endl;
		ShrubberyCreationForm s2("Shrubbery");
		b3.signForm(s2);
		b3.executeForm(s2);
		std::cout << std::endl;
		std::cout << s2 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat b1("b1", 1);
		
		std::cout << "============RobotomyRequestForm Success Test============" << std::endl;
		RobotomyRequestForm r1("Robotomy");
		b1.signForm(r1);
		b1.executeForm(r1);
		std::cout << std::endl;
		std::cout << r1 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat b2("b2", 74);
		
		std::cout << "=============RobotomyRequestForm Fail Test=============" << std::endl;
		RobotomyRequestForm r2("Robotomy");
		b2.signForm(r2);
		b2.executeForm(r2);
		std::cout << std::endl;
		std::cout << r2 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat b1("b1", 1);
		
		std::cout << "===========PresidentialPardonForm Success Test===========" << std::endl;
		PresidentialPardonForm p1("Presidential");
		b1.signForm(p1);
		b1.executeForm(p1);
		std::cout << std::endl;
		std::cout << p1 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
	std::cerr << e.what() << '\n';
	}

		
	try
	{
		Bureaucrat b2("b2", 26);
		
		std::cout << "============PresidentialPardonForm Fail Test============" << std::endl;
		
		PresidentialPardonForm p2("Presidential");
		b2.signForm(p2);
		b2.executeForm(p2);
		std::cout << std::endl;
		std::cout << p2 << std::endl;
		std::cout << std::endl << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}

