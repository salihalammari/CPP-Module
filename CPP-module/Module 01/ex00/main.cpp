/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:21:24 by slammari          #+#    #+#             */
/*   Updated: 2022/11/28 07:50:56 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *zombieNew = newZombie("newZombie");

	zombieNew->announce();
	randomChump("randomChump");
	delete zombieNew;
}
