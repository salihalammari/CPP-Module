/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:03:14 by slammari          #+#    #+#             */
/*   Updated: 2022/12/04 02:46:44 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	this->setType("Animal");
}

Animal::Animal(const Animal& a) : _type(a.getType())
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& a)
{
	std::cout << "Animal copy assignation operator called" << std::endl;
	_type = a.getType();
	return *this;
}

void Animal::setType(const std::string& type)
{
	_type = type;
}

std::string Animal::getType(void) const
{
	return _type;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal Sound : ?" << std::endl;
}
