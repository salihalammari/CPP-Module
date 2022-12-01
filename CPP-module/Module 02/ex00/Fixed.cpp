/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:14:30 by slammari          #+#    #+#             */
/*   Updated: 2022/12/01 03:39:02 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::bit = 8;

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

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout<< "Copy assignation operator called" << std::endl;
	if (this != &src)
		this->value = src.getRawBits();
	return (*this);
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
