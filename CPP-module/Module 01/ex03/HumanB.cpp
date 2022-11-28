/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:26:43 by slammari          #+#    #+#             */
/*   Updated: 2022/11/25 20:52:57 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}

void    HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB()
{
}
