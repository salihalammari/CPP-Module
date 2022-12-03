/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:33:58 by slammari          #+#    #+#             */
/*   Updated: 2022/12/03 22:33:59 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public :
	WrongCat(void);
	WrongCat(const WrongCat& wc);
	virtual ~WrongCat(void);
	WrongCat& operator=(const WrongCat& wc);

	void makeSound(void) const;
};

#endif
