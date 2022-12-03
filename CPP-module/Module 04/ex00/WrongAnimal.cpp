/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:32:53 by slammari          #+#    #+#             */
/*   Updated: 2022/12/03 22:32:53 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->setType("WrongAnimal");
}

WrongAnimal::WrongAnimal(const WrongAnimal& wa) : _type(wa.getType())
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wa)
{
	std::cout << "WrongAnimal copy assignation operator called" << std::endl;
	_type = wa.getType();
	return *this;
}

void WrongAnimal::setType(const std::string& type)
{
	_type = type;
}

std::string WrongAnimal::getType(void) const
{
	return _type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound : ?" << std::endl;
}
