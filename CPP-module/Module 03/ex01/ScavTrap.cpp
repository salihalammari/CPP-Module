/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 21:59:42 by slammari          #+#    #+#             */
/*   Updated: 2022/12/02 22:44:40 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hp = 100;
	_ep = 50;
	_ad = 20;
	guard_mode = false;
	std::cout << "ScavTrap Default constructor : " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 50;
	_ad = 20;
	guard_mode = false;
	std::cout << "ScavTrap String constructor : " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scav) : ClapTrap(scav)
{
	guard_mode = scav.guard_mode;
	std::cout << "ScavTrap Copy constructor : " << _name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor : " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav)
{
	ClapTrap::operator=(scav);
	guard_mode = scav.guard_mode;
	std::cout << "ScavTrap Copy assignment operator : " << _name << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (!is_alive())
		return ;
	std::cout << "ScavTrap " << _name << " attacks " << target \
		<< ", causing " << _ad << " points of damage!" << std::endl;
	_ep--;
	std::cout << "ScavTrap " << _name << "'s remaining energy point : " << _ep << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (guard_mode)
		std::cout << "ScavTrap " << _name << " can't be attacked because it is in Gate keeper mode!" << std::endl;
	else
		ClapTrap::takeDamage(amount);
}

void ScavTrap::guardGate(void)
{
	if (_hp > 0)
	{
		guard_mode = true;
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " cannot enter Gate keeper mode because " << _name << " is dead!" << std::endl;
}

