/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:04:15 by slammari          #+#    #+#             */
/*   Updated: 2022/07/24 10:03:59 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string	command;
	PhoneBook phonebook;

	std::cout << "ADD Contact   : ADD" << std::endl;	
	std::cout << "Search Contact : SEARCH" << std::endl;
	std::cout << "tfi dow      : EXIT" << std::endl;
	while(1337)
	{
		std::cin >> command;
		if (std::cin.eof())
			return (1);
		else if (command == "ADD")
		{	
			if(phonebook.Add())
				return (1);
		}
		else if(command == "SEARCH")
		{
			if(phonebook.print_phbook())
				return (1);
		}
		else if(command == "EXIT" )
			return (0);
		else
			std::cout << "wrong command : " << command << std::endl;	
	}
	return (0);
}
