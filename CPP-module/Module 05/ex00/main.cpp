/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:18:33 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 22:41:13 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat test_1("test_1", 1);
	try
	{
		test_1.incrementGrade();
		std::cout << "KO [1]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "OK [1]" << std::endl;
	}


	Bureaucrat test_2("test_2", 2);
	try
	{
		test_2.incrementGrade();
		std::cout << "OK [2]" << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cout << "KO [2]" << std::endl;
	}

	Bureaucrat test_75("test_75", 75);
	try
	{
		test_75.incrementGrade();
		std::cout << "OK [75]" << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cout << "KO [75]" << std::endl;
	}


	Bureaucrat test_149("test_149", 149);
	try
	{
		test_149.decrementGrade();
		std::cout << "OK [149]" << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cout << "KO [149]" << std::endl;
	}

	Bureaucrat test_150("test_150", 150);
	try
	{
		test_150.decrementGrade();
		std::cout << "KO [150]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "OK [150]" << std::endl;
	}

	return (0);

	Bureaucrat b1("b1", 150);
	Bureaucrat b2("b2", 1);
	Bureaucrat b3("b3", 10);
	Bureaucrat b4(b3);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << b4 << std::endl;
	std::cout << std::endl;

	try
	{
		std::cout << "=========Test 1=========" << std::endl;
		b1.decrementGrade();
		std::cout << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "=========Test 2=========" << std::endl;
		b2.incrementGrade();
		std::cout << b2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		std::cout << "=========Test 3=========" << std::endl;
		b3.incrementGrade();
		std::cout << b3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "=========Test 4=========" << std::endl;
		b4.decrementGrade();
		std::cout << b4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "=========Test 5=========" << std::endl;
		Bureaucrat b6("b6", 151);
		b6.decrementGrade(); // will never reach this
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "=========Test 6=========" << std::endl;
		Bureaucrat b7("b7", -99);
		b7.decrementGrade(); // will never reach this
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
