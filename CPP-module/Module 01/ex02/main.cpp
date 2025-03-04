/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:24:15 by slammari          #+#    #+#             */
/*   Updated: 2022/11/29 19:36:34 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "===================================" << std::endl;
	std::cout << " display the address of the string " << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << "by using str      : " << &str << std::endl;
	std::cout << "by using stringPTR: " << stringPTR << std::endl;
	std::cout << "by using stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "====================================" << std::endl;
	std::cout << "         display the string         " << std::endl;
	std::cout << "====================================" << std::endl;
	std::cout << "by using str      : " << str << std::endl;
	std::cout << "by using stringPTR: " << *stringPTR << std::endl;
	std::cout << "by using stringREF: " << stringREF << std::endl;

	return 0;
}
