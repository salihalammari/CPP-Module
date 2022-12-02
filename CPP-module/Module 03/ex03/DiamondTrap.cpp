/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:32:38 by slammari          #+#    #+#             */
/*   Updated: 2022/12/02 20:32:39 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap(), _name(ClapTrap::_name)
{
	ClapTrap::_name += "_clap_name";
	_ep = 50;
	std::cout << "DiamondTrap Default constructor : " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_ep = 50;
	std::cout << "DiamondTrap String constructor : " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamond) : ClapTrap(diamond), ScavTrap(diamond), FragTrap(diamond), _name(diamond._name)
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
