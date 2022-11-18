/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:21:24 by slammari          #+#    #+#             */
/*   Updated: 2022/11/18 05:02:11 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie zombieStack = Zombie("stack");
	Zombie *zombieHeap = new Zombie("heap");
	Zombie *zombieNew = newZombie("newZombie");

	zombieStack.announce();
	zombieHeap->announce();
	zombieNew->announce();
	randomChump("randomChump");
	delete zombieHeap;
}
