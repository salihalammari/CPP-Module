/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:03:09 by slammari          #+#    #+#             */
/*   Updated: 2022/12/04 02:40:35 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->setType("Cat");
}

Cat::Cat(const Cat& c) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = c.getType();
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& c)
{
	std::cout << "Cat copy assignation operator called" << std::endl;
	_type = c.getType();
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat Sound : Meow~ Meow~" << std::endl;
}
