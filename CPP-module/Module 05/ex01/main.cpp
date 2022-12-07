/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:18:33 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 20:04:37 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
	Bureaucrat b1("b1", 30);
	Bureaucrat b2("b2", 70);
	
	try
	{
		std::cout << "=========Test 1=========" << std::endl;
		Form f1("f1", 50, 70);
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		Form f2("f2", 100, 151);
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		std::cout << f1 << std::endl;
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		std::cout << std::endl;
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		std::cout << f2 << std::endl;
		std::cout << "__LINE__: " << __LINE__ << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "=========Test 2=========" << std::endl;
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		Form f3("f3", 50, 70);
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		Form f4 = f3;
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		b1.signForm(f3);
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		b2.signForm(f4);
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		std::cout << std::endl;
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		std::cout << f3 << std::endl;
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		std::cout << std::endl;
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		std::cout << f4 << std::endl;
		std::cout << "__LINE__: " << __LINE__ << std::endl;
		std::cout << std::endl;
		std::cout << "__LINE__: " << __LINE__ << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
