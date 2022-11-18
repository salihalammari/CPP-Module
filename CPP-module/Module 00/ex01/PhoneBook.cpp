/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:04:05 by slammari          #+#    #+#             */
/*   Updated: 2022/11/18 00:56:13 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_num(0)
{
}

PhoneBook::~PhoneBook()
{
}

int		PhoneBook::get_contact_num()
{
	return this->contact_num;
}

Contact	PhoneBook::get_user_contact()
{
	std::string	fields_name[5];
	std::string	add_fields[5];

	fields_name[0] = "first_name     : ";
	fields_name[1] = "last_name      : ";
	fields_name[2] = "nickname       : ";
	fields_name[3] = "phone_number   : ";
	fields_name[4] = "darkest secret : ";

	std::cout << "###############" << std::endl;
	std::cout << "# ADD Contact #" << std::endl;
	std::cout <<"###############"  << std::endl;
	
	int	i = 0;
	std::cout << fields_name[i];
	while (i < 5 && std::getline(std::cin, add_fields[i]))
	{
		if (i >= 4)
			break;
		std::cout << fields_name[++i];
	}
	return Contact(add_fields[0], add_fields[1], add_fields[2], add_fields[3], add_fields[4]);
}

void	PhoneBook::add_contact()
{
	Contact contact = get_user_contact();

	if (contact.check_empty() == 1)
	{
		std::cout << "Contact can't have a empty field" << std::endl;
		return ;
	}
	
	if (this->contact_num < 8)
	{
		this->contact[this->contact_num] = contact;
		this->contact_num++;
		std::cout << "Added a contact to index number " << this->contact_num
			<< ". (" << this->contact_num << "/8)" << std::endl;
	}
	else
	{
		for (int i = 1; i < 8; i++)
			this->contact[i - 1] = this->contact[i];
		this->contact[7] = contact;
		std::cout << "The storage space is full. Deleted the oldest saved contact. (8/8)" << std::endl;
	}
}

void	PhoneBook::show_contact_header()
{
	std::cout << "=============================================" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "=============================================" << std::endl;
}

void	PhoneBook::show_contact_info(int index)
{
	Contact	contact = this->contact[index];

	std::cout << "|" << std::setw(10) << index + 1 << "|";
	show_contact_fields(contact.get_first_name());
	show_contact_fields(contact.get_last_name());
	show_contact_fields(contact.get_nickname());
	std::cout << std::endl << "---------------------------------------------" << std::endl;
}

void	PhoneBook::show_contact_fields(std::string field)
{
	if (field.length() <= 10)
		std::cout << std::setw(10) << field << "|";
	else
		std::cout << field.substr(0, 9) << ".|";
}

int	PhoneBook::get_user_search_index()
{
	std::string	str_index;
	int			index = 1;

	std::cout << "##################" << std::endl;
	std::cout << "# SEARCH Contact #" << std::endl;
	std::cout <<"##################"  << std::endl;
	show_contact_header();
	for (int i = 0; i < get_contact_num(); i++)
		show_contact_info(i);
	std::cout << "Enter the index number : ";
	if (std::getline(std::cin, str_index))
		index = atoi(str_index.c_str());
	return index;
}

void	PhoneBook::show_contact(int index)
{
	if (index < 0 || index >= this->contact_num)
	{
		std::cout << "Either the contact is not stored in this index, or the index value or format is invalid." << std::endl;
	}
	else
	{   
		Contact	contact = this->contact[index];

		std::cout << "first_name     : " << contact.get_first_name() << std::endl;
		std::cout << "last_name      : " << contact.get_last_name() << std::endl;
		std::cout << "nickname       : " << contact.get_nickname() << std::endl;
		std::cout << "phone_number   : " << contact.get_phone_number() << std::endl;
		std::cout << "darkest_secret : " << contact.get_darkest_secret() << std::endl;
	
	}
}

void	PhoneBook::search_contact()
{
	int index = get_user_search_index();
	
	show_contact(index - 1);
	return;
}
