/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:07:24 by slammari          #+#    #+#             */
/*   Updated: 2022/12/12 20:00:01 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::n_bit = 8;

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
	this->value = (int)roundf(src * (1 << n_bit));
}

Fixed::Fixed(int src)
{
	this->value = src << n_bit;
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
	return ((float)this->value / (1 << n_bit));
}

int Fixed::toInt( void ) const
{
	return (this->value > 0 ? 1 : -1)*(abs(this->value) >> n_bit);
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
	f.setRawBits(((long long)this->value * src.value )>> n_bit);
	return (f);
}

Fixed Fixed::operator/(const Fixed &src) const
{
	Fixed f;
	f.setRawBits(((long long)this->value << n_bit ) / src.value );
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
