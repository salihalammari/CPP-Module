/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:25:10 by slammari          #+#    #+#             */
/*   Updated: 2022/11/30 13:44:24 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon        club = Weapon("crude spiked club");
		// club::Weapon();
		club.Weapon();

	// 	HumanA bob("Bob", club);
	// 	bob.attack();
	// 	club.setType("some other type of club");
	// 	bob.attack();
	// }
	// {
	// 	Weapon        club = Weapon("crude spiked club");
	// 	HumanB jim("Jim");
	// 	jim.setWeapon(club);
	// 	jim.attack();
	// 	club.setType("some other type of club");
	// 	jim.attack();
	}
    return 0;
}