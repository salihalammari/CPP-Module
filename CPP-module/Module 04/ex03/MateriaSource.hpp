/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:24:25 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 20:37:02 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private :
	AMateria* _inventory[INV_SIZE];
public :
	MateriaSource(void);
	MateriaSource(const MateriaSource& ms);
	virtual ~MateriaSource(void);
	MateriaSource& operator=(const MateriaSource& ms);
	void learnMateria(AMateria* am);
	AMateria* createMateria(const std::string& type);
};

#endif
