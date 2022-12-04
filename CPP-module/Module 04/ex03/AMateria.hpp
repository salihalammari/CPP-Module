/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:23:31 by slammari          #+#    #+#             */
/*   Updated: 2022/12/04 05:23:32 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define INV_SIZE 4

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
protected :
	std::string _type;
public :
	AMateria(void);
	AMateria(const std::string& type);
	AMateria(const AMateria& am);
	virtual ~AMateria(void);
	AMateria& operator=(const AMateria& am);

	const std::string& getType(void) const;
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);
};

#endif
