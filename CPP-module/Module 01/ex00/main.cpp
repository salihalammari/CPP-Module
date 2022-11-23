/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:21:24 by slammari          #+#    #+#             */
/*   Updated: 2022/11/23 20:03:08 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	
	Zombie zombieStack = Zombie("stack");
	Zombie *zombieNew = newZombie("newZombie");

	zombieStack.announce();
	zombieNew->announce();
	randomChump("randomChump");
	delete zombieNew;
}
