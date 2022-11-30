/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:25:24 by slammari          #+#    #+#             */
/*   Updated: 2022/11/28 08:07:34 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    this->type = "";
}
Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{}

std::string Weapon::getType() const
{
    return this->type ;
}

void    Weapon::setType(std::string _type)
{
    this->type = _type;
}