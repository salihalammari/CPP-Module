/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:06:07 by slammari          #+#    #+#             */
/*   Updated: 2022/11/29 18:28:45 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->value = 0;
}

Fixed::~Fixed( void )
{
}

Fixed::Fixed(const Fixed& src)
{
	this->value = src.getRawBits();
}

Fixed::Fixed(float src)
{
	this->value = (int)roundf(src * (1 << fractional_bits));
}

Fixed::Fixed(int src)
{
	this->value = src << fractional_bits;
}

Fixed &Fixed::operator=(const Fixed &src)
{
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

bool Fixed::operator>(const Fixed &src)
{
	return (this->value > src.value);
}

bool Fixed::operator>=(const Fixed &src)
{
	return (this->value >= src.value);
}

bool Fixed::operator<(const Fixed &src)
{
	return (this->value < src.value);
}

bool Fixed::operator<=(const Fixed &src)
{
	return (this->value <= src.value);
}

bool Fixed::operator==(const Fixed &src)
{
	return (this->value == src.value);
}

bool Fixed::operator!=(const Fixed &src)
{
	return (this->value != src.value);
}

Fixed Fixed::operator+(const Fixed &src)
{
	return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed Fixed::operator-(const Fixed &src)
{
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed Fixed::operator*(const Fixed &src)
{
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(const Fixed &src)
{
	return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed& Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->value++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->value--;
	return (temp);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > (Fixed)b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return (a);
	else
		return (b);
}
