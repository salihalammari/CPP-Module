/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:02:24 by slammari          #+#    #+#             */
/*   Updated: 2022/11/25 05:02:25 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->value = 0;
	std::cout<< "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout<< "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout<< "Copy constructor called" << std::endl;
	this->value = src.getRawBits();
}

Fixed::Fixed(float src)
{
	std::cout<< "Float constructor called" << std::endl;
	this->value = (int)roundf(src * (1 << fractional_bits));
}

Fixed::Fixed(int src)
{
	std::cout<< "Int constructor called" << std::endl;
	this->value = src << fractional_bits;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout<< "Assignation operator called" << std::endl;
	this->value = src.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &ref)
{
	out << ref.toFloat();
	return out;
}

int Fixed::getRawBits( void ) const
{
	std::cout<< "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value / (1 << 8));
}

int Fixed::toInt( void ) const
{
	return (this->value >> 8);
}
