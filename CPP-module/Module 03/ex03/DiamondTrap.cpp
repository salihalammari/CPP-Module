/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:32:38 by slammari          #+#    #+#             */
/*   Updated: 2022/12/12 20:07:32 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap()
{
	ClapTrap::_name += "_clap_name";
	_ep = 50;
	std::cout << "DiamondTrap Default constructor : " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), _name(name)
{
	_ep = 50;
	std::cout << "DiamondTrap String constructor : " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamond) : ScavTrap(diamond), _name(diamond._name)
{
	guard_mode = diamond.guard_mode;
	std::cout << "DiamondTrap Copy constructor : " << _name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor : " << _name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamond)
{
	ClapTrap::operator=(diamond);
	guard_mode = diamond.guard_mode;
	std::cout << "DiamondTrap Copy assignment operator : " << _name << std::endl;
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "Who am I?" << std::endl;
	std::cout << "DiamondTrap name : " << _name << std::endl;
	std::cout << "ClapTrap name : " << ClapTrap::_name << std::endl;
}
