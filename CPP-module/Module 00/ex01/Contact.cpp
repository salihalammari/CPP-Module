/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:39:52 by slammari          #+#    #+#             */
/*   Updated: 2022/11/18 00:34:45 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string first_name,
		std::string last_name,
		std::string nickname,
		std::string phone_number,
		std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

int	Contact::check_empty()
{
	if (this->first_name.empty() == true)
		return (1);
	if (this->last_name.empty() == true)
		return (1);
	if (this->nickname.empty() == true)
		return (1);
	if (this->phone_number.empty() == true)
		return (1);
	if (this->darkest_secret.empty() == true)
		return (1);
	return (0);
}

Contact::Contact()
{
	Contact("", "", "", "", "");
}

Contact::~Contact()
{
}

std::string	Contact::get_first_name()
{
	return this->first_name;
}

std::string	Contact::get_last_name()
{
	return this->last_name;
}

std::string	Contact::get_nickname()
{
	return this->nickname;
}

std::string	Contact::get_phone_number()
{
	return this->phone_number;
}

std::string	Contact::get_darkest_secret()
{
	return this->darkest_secret;
}
