/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:23:41 by slammari          #+#    #+#             */
/*   Updated: 2022/11/18 05:23:42 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie_horde = new[N];

    for(int i, i < N, i++)
    {
    	str << (i + 1);
		zombie_horde[i].set_name(name + "(" + str.str() + ")");
	}
	return zombie_horde;
}