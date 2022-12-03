/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:31:21 by slammari          #+#    #+#             */
/*   Updated: 2022/12/03 04:45:05 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public :
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& frag);
	~FragTrap(void);
	FragTrap& operator=(const FragTrap& frag);

	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif
