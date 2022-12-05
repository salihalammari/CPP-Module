/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:06:08 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 20:28:13 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected :
	std::string _type;
public :
	Animal(void);
	Animal(const Animal& a);
	virtual ~Animal(void);
	Animal& operator=(const Animal& a);

	void setType(const std::string& type);
	std::string getType(void) const;
	virtual void makeSound(void) const = 0;
};

#endif