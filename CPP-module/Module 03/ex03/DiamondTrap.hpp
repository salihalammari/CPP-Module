/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:32:48 by slammari          #+#    #+#             */
/*   Updated: 2022/12/12 20:03:14 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap
{
private :
	std::string _name;
public :
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& diamond);
	~DiamondTrap(void);
	DiamondTrap& operator=(const DiamondTrap& diamond);

	void attack(const std::string& target);
    // using	ScavTrap::attack;
	void whoAmI(void) const;
};

#endif
