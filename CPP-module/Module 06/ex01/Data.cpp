/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:55:25 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 22:55:25 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : _name("Default"), _age(20), _height(170) {}

Data::~Data(void) {}

Data::Data(std::string name, int age, float height) : _name(name), _age(age), _height(height) {}

Data::Data(const Data& d)
{
	*this = d;
}

Data& Data::operator=(const Data &d)
{
	_name = d.getName();
	_age = d.getAge();
	_height = d.getHeight();
	return *this;
}

const std::string Data::getName(void) const
{
	return _name;
}

int Data::getAge(void) const
{
	return _age;
}

float Data::getHeight(void) const
{
	return _height;
}

void Data::print() const
{
	std::cout << "Address : " << this << std::endl;
	std::cout << "Name : " << _name << std::endl;
	std::cout << "Age : " << _age << std::endl;
	std::cout << "Height : " << _height << std::endl << std::endl;
}


uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
