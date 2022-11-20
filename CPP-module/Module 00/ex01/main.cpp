/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:04:15 by slammari          #+#    #+#             */
/*   Updated: 2022/11/18 00:22:43 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	phone_book = PhoneBook();

	std::cout << "My Awesome Phonebook %> ";
	while (std::getline(std::cin, command))
	{
		if (command == "EXIT")
		{
			std::cout << "exit" << std::endl;
			break;
		}
		else if (command == "ADD")
		{
			phone_book.add_contact();
		}
		else if (command == "SEARCH")
		{
			phone_book.search_contact();
		}
		else if (command != "")
		{
			std::cout << "It's not a valid command: " 
					<< command << std::endl;
		}
		std::cout << "My Awesome Phonebook %> ";
	}
	return 0;
}
