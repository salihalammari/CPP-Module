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
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap def;
	ScavTrap s1("Scav1");
	FragTrap f1("Frag1");

	std::cout << std::endl;
	s1.attack("Frag1");
	f1.takeDamage(s1.getAd());
	std::cout << std::endl;
	
	s1.guardGate();
	std::cout << std::endl;

	f1.attack("Scav1");
	s1.takeDamage(f1.getAd());
	std::cout << std::endl;

	def.beRepaired(100);
	std::cout << std::endl;

	f1.highFivesGuys();
	std::cout << std::endl;
	
	return 0;
}
