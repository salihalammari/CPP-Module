/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:03:02 by slammari          #+#    #+#             */
/*   Updated: 2022/11/30 12:03:03 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public :
	Dog(void);
	Dog(const Dog& d);
	virtual ~Dog(void);
	Dog& operator=(const Dog& d);

	void makeSound(void) const;
};

#endif