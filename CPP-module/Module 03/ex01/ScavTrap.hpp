/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 21:58:42 by slammari          #+#    #+#             */
/*   Updated: 2022/12/03 05:10:47 by slammari         ###   ########.fr       */
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
	void guardGate(void);
};

#endif
