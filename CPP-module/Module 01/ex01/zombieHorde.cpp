/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:23:41 by slammari          #+#    #+#             */
/*   Updated: 2022/11/23 20:17:03 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
		return(NULL);
	Zombie *zombie_horde = new Zombie[N];
	if (!zombie_horde)
		return (NULL);
	for(int i = 0; i < N ; i++)
	{
		zombie_horde[i].set_name(name);
	}
	return zombie_horde;
}