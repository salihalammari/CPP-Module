/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:34:21 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 20:37:28 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void) : _type("Default")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type)
{
	std::cout << "AMateria string constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& am) : _type(am.getType())
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& am)
{
	std::cout << "AMateria copy assignation operator called" << std::endl;
	_type = am.getType();
	return *this;
}

const std::string& AMateria::getType(void) const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Called use function by " << target.getName() << std::endl;
}
