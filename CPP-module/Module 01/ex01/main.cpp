/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:22:52 by slammari          #+#    #+#             */
/*   Updated: 2022/11/18 05:22:53 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*	zombies = zombieHorde(5, "jwoo");

	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete[] zombies;
}
