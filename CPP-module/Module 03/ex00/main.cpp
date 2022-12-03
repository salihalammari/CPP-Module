/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 21:57:19 by slammari          #+#    #+#             */
/*   Updated: 2022/12/03 02:33:35 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap def;
	ClapTrap c1("Clap1");
	ClapTrap c2("Clap2");
	ClapTrap c3(c1);
	ClapTrap c4 = c2;

	std::cout << std::endl;
	while (c1.is_alive() && c2.is_alive())
	{
		c1.attack("Clap2");
		c2.takeDamage(c1.getAd());
		std::cout << std::endl;
	}
	std::cout << std::endl;
	def.beRepaired(10);
	std::cout << std::endl;
	
	return 0;
}
