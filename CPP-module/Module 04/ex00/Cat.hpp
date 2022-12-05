/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:03:07 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 19:43:20 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public :
	Cat(void);
	Cat(const Cat& c);
	virtual ~Cat(void);
	Cat& operator=(const Cat& c);

	void makeSound(void) const;
};

#endif