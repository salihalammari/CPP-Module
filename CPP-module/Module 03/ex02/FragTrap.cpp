/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:31:07 by slammari          #+#    #+#             */
/*   Updated: 2022/12/03 04:45:01 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "FragTrap Default constructor : " << _name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "FragTrap String constructor : " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& frag) : ClapTrap(frag)
{
	std::cout << "FragTrap Copy constructor : " << _name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor : " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& frag)
{
	ClapTrap::operator=(frag);
	std::cout << "FragTrap Copy assignment operator : " << _name << std::endl;
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (!is_alive())
		return ;
	std::cout << "FragTrap " << _name << " attacks " << target \
		<< ", causing " << _ad << " points of damage!" << std::endl;
	_ep--;
	std::cout << "FragTrap " << _name << "'s remaining energy point : " << _ep << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " positive high fives request!" << std::endl;
}
