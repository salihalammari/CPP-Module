/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:03:04 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 19:43:16 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog& d) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = d.getType();
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& d)
{
	std::cout << "Dog copy assignation operator called" << std::endl;
	_type = d.getType();
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog Sound : Woof! Woof!" << std::endl;
}