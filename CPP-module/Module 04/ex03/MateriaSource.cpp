/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:24:22 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 20:36:59 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < INV_SIZE; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& ms)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < INV_SIZE; i++)
	{
		_inventory[i] = NULL;
		if (ms._inventory[i])
			_inventory[i] = ms._inventory[i]->clone();
	}
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ms)
{
	std::cout << "MateriaSource copy assignation operator called" << std::endl;
	if (this != &ms)
	{
		for (int i = 0; i < INV_SIZE; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (ms._inventory[i])
				_inventory[i] = ms._inventory[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* am)
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

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
			return _inventory[i]->clone();
	}
	return NULL;
}
