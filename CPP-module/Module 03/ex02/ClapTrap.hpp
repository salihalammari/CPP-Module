/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:29:35 by slammari          #+#    #+#             */
/*   Updated: 2022/12/02 20:29:35 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected :
	std::string _name;
	unsigned int _hp;
	unsigned int _ep;
	unsigned int _ad;
public :
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& clap);
	~ClapTrap(void);
	ClapTrap& operator=(const ClapTrap& clap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	bool is_alive(void) const;
	unsigned int getAd(void) const;
};

#endif
