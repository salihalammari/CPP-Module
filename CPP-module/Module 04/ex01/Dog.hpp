/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:03:36 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 20:21:49 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private :
	Brain *_brain;
public :
	Dog(void);
	Dog(const Dog& d);
	virtual ~Dog(void);
	Dog& operator=(const Dog& d);

	void makeSound(void) const;
	Brain* getBrain(void) const;
};

#endif
