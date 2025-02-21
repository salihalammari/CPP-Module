/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:24:04 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 20:35:52 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const std::string& type) : AMateria(type)
{
	std::cout << "Ice string constructor called" << std::endl;
}

Ice::Ice(const Ice& i) : AMateria(i.getType())
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& i)
{
	std::cout << "Ice copy assignation operator called" << std::endl;
	_type = i.getType();
	return *this;
}

AMateria* Ice::clone(void) const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
