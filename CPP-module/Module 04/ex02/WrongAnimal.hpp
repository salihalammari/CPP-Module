/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:33:49 by slammari          #+#    #+#             */
/*   Updated: 2022/12/03 22:33:50 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected :
	std::string _type;
public :
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& wa);
	virtual ~WrongAnimal(void);
	WrongAnimal& operator=(const WrongAnimal& wa);

	void setType(const std::string& type);
	std::string getType(void) const;
	void makeSound(void) const;
};

#endif
