/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:03:34 by slammari          #+#    #+#             */
/*   Updated: 2022/11/30 12:03:35 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->setType("Dog");
	_brain = new Brain();
}

Dog::Dog(const Dog& d) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = d.getType();
	_brain = new Brain(*d.getBrain());
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog& Dog::operator=(const Dog& d)
{
	std::cout << "Dog copy assignation operator called" << std::endl;
	if (this != &d)
	{
		_type = d.getType();
		delete _brain;
		_brain = new Brain(*d.getBrain());
	}	
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog Sound : Woof! Woof!" << std::endl;
}

Brain* Dog::getBrain(void) const
{
	return _brain;
}
