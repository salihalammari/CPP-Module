/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:06:07 by slammari          #+#    #+#             */
/*   Updated: 2022/12/01 03:48:56 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

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
	return ((float)this->value / (1 << fractional_bits));
}

int Fixed::toInt( void ) const
{
	return (this->value > 0 ? 1 : -1)*(abs(this->value) >> fractional_bits);
} 

bool Fixed::operator>(const Fixed &src) const
{
	return (this->value > src.value);
}

bool Fixed::operator>=(const Fixed &src) const
{
	return (this->value >= src.value);
}

bool Fixed::operator<(const Fixed &src) const
{
	return (this->value < src.value);
}

bool Fixed::operator<=(const Fixed &src) const
{
	return (this->value <= src.value);
}

bool Fixed::operator==(const Fixed &src) const
{
	return (this->value == src.value);
}

bool Fixed::operator!=(const Fixed &src) const
{
	return (this->value != src.value);
}

Fixed Fixed::operator+(const Fixed &src) const
{
	Fixed f;
	f.setRawBits(this->value + src.value);
	return (f);
}

Fixed Fixed::operator-(const Fixed &src) const
{
	Fixed f;
	f.setRawBits(this->value - src.value);
	return (f);
}

Fixed Fixed::operator*(const Fixed &src) const
{
	Fixed f;
	f.setRawBits(((long long)this->value * src.value )>> fractional_bits);
	return (f);
}

Fixed Fixed::operator/(const Fixed &src) const
{
	Fixed f;
	f.setRawBits(((long long)this->value << fractional_bits ) / src.value );
	return (f);
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

Fixed &Fixed::max(Fixed &a, Fixed &b)
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

Fixed &Fixed::min( Fixed &a, Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return (a);
	else
		return (b);
}
