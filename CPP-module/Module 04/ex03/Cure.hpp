/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:24:01 by slammari          #+#    #+#             */
/*   Updated: 2022/12/04 05:24:02 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public :
	Cure(void);
	Cure(const std::string& type);
	Cure(const Cure& c);
	Cure& operator=(const Cure& c);
	virtual ~Cure(void);
	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif
