/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:23:42 by slammari          #+#    #+#             */
/*   Updated: 2022/12/04 05:23:43 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Anonymous Character")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < INV_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string& name) : _name(name)
{
	std::cout << "Character string constructor called" << std::endl;
	for (int i = 0; i < INV_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& c) : _name(c.getName())
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < INV_SIZE; i++)
	{
		_inventory[i] = NULL;
		if (c._inventory[i])
			_inventory[i] = c._inventory[i]->clone();
	}
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

Character& Character::operator=(const Character& c)
{
	std::cout << "Character copy assignation operator called" << std::endl;
	if (this != &c)
	{
		_name = c.getName();
		for (int i = 0; i < INV_SIZE; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (c._inventory[i])
				_inventory[i] = c._inventory[i]->clone();
		}
	}
	return *this;
}

const std::string& Character::getName(void) const
{
	return _name;
}

void Character::equip(AMateria* am)
{
	if (!am)
		return ;
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = am;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < INV_SIZE && _inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < INV_SIZE && _inventory[idx])
		_inventory[idx]->use(target);
}
