/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:05:27 by slammari          #+#    #+#             */
/*   Updated: 2022/11/30 12:05:28 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->setType("Cat");
	_brain = new Brain();
}

Cat::Cat(const Cat& c) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = c.getType();
	_brain = new Brain(*c.getBrain());
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat& Cat::operator=(const Cat& c)
{
	std::cout << "Cat copy assignation operator called" << std::endl;
	if (this != &c)
	{
		_type = c.getType();
		delete _brain;
		_brain = new Brain(*c.getBrain());
	}
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat Sound : Meow~ Meow~" << std::endl;
}

Brain* Cat::getBrain(void) const
{
	return _brain;
}
