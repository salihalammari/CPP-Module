/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:24:16 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 20:36:06 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public :
	virtual ~IMateriaSource(void) {}
	virtual void learnMateria(AMateria* am) = 0;
	virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif
