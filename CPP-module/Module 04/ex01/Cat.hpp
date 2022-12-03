/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:03:32 by slammari          #+#    #+#             */
/*   Updated: 2022/11/30 12:03:33 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private :
	Brain *_brain;
public :
	Cat(void);
	Cat(const Cat& c);
	virtual ~Cat(void);
	Cat& operator=(const Cat& c);

	void makeSound(void) const;
	Brain* getBrain(void) const;
};

#endif
