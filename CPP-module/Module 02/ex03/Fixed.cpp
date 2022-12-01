/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:07:24 by slammari          #+#    #+#             */
/*   Updated: 2022/12/01 03:24:51 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::n_bit = 8;

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(const int i)
{
    this->value = i << this->n_bit;
}

Fixed::Fixed(const float f)
{
    this->value = roundf(f * (1 << this->n_bit));
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed::~Fixed(){}

Fixed &Fixed::operator=(const Fixed &src)
{
    if (this != &src)
        this->value= src.getRawBits();
    return (*this);
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
	f.setRawBits(((long long)this->value << n_bit) / src.value );
	return (f);
}

Fixed Fixed::operator/(const Fixed &src) const
{
	Fixed f;
	f.setRawBits(((long long)this->value << n_bit) / src.value );
	return (f);
}

Fixed Fixed::operator++()
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator--()
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed copy = *this;
    ++this->value;
    return (copy);
}

Fixed Fixed::operator--(int)
{
    Fixed copy = *this;
    --this->value;
    return (copy);
}

int Fixed::getRawBits( void ) const{
    return (this->value);
}

void Fixed::setRawBits( int const raw )
{
    this->value= raw;
}

float Fixed::toFloat( void )const{
    return ((float)this->value / (float)(1 << this->n_bit));
}

int Fixed::toInt( void )const{
    return (this->value >> this->n_bit);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
    if (first.toFloat() >= second.toFloat())
        return (second);
    else
        return (first);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
    if (first.toFloat() >= second.toFloat())
        return (second);
    else
        return (first);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
    if (first.toFloat() >= second.toFloat())
        return (first);
    else
        return (second);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
    if (first.toFloat() >= second.toFloat())
        return (first);
    else
        return (second);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed){
    o << fixed.toFloat();
    return (o);
}
