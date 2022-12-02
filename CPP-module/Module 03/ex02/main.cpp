/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:29:39 by slammari          #+#    #+#             */
/*   Updated: 2022/12/02 20:29:39 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap def;
	ScavTrap s1("Scav1");
	ScavTrap s2("Scav2");

	std::cout << std::endl;
	s1.attack("Scav2");
	s2.takeDamage(s1.getAd());
	std::cout << std::endl;

	s2.beRepaired(10);
	std::cout << std::endl;
	
	s2.guardGate();
	std::cout << std::endl;
	
	def.attack("Scav2");
	s2.takeDamage(def.getAd());
	std::cout << std::endl;
	
	return 0;
}