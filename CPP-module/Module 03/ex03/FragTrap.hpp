/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:31:21 by slammari          #+#    #+#             */
/*   Updated: 2022/12/03 04:23:49 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public :
	bool guard_mode;
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scav);
	~ScavTrap(void);
	ScavTrap& operator=(const ScavTrap& scav);

	void attack(const std::string& target);
    void takeDamage(unsigned int amount);
	void guardGate(void);
};

#endif
