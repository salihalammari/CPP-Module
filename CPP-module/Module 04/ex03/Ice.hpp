/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:24:08 by slammari          #+#    #+#             */
/*   Updated: 2022/12/04 05:24:09 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public :
	Ice(void);
	Ice(const std::string& type);
	Ice(const Ice& i);
	Ice& operator=(const Ice& i);
	virtual ~Ice(void);
	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif
