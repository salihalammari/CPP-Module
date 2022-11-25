/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:07:24 by slammari          #+#    #+#             */
/*   Updated: 2022/11/25 05:07:25 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::n_bit = 8;

Fixed::Fixed()
{
    this->vf = 0;
}

Fixed::Fixed(const int i)
{
    this->vf = i << this->n_bit;
}

Fixed::Fixed(const float f)
{
    this->vf = roundf(f * (1 << this->n_bit));
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed::~Fixed(){}

Fixed &Fixed::operator=(const Fixed &src)
{
    if (this != &src)
        this->vf = src.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed fixed)const
{
    return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(const Fixed fixed) const
{
    return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(const Fixed fixed) const
{
    return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(const Fixed fixed) const
{
    return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(const Fixed fixed) const
{
    return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(const Fixed fixed) const
{
    return (this->toFloat() != fixed.toFloat());
}

float Fixed::operator+(const Fixed fixed) const
{
    return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator-(const Fixed fixed) const
{
    return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator*(const Fixed fixed) const
{
    return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator/(const Fixed fixed) const
{
    return (this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++()
{
    this->vf++;
    return (*this);
}

Fixed Fixed::operator--()
{
    this->vf--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed copy = *this;
    ++this->vf;
    return (copy);
}

Fixed Fixed::operator--(int)
{
    Fixed copy = *this;
    --this->vf;
    return (copy);
}

int Fixed::getRawBits( void ) const{
    return (this->vf);
}

void Fixed::setRawBits( int const raw )
{
    this->vf = raw;
}

float Fixed::toFloat( void )const{
    return ((float)this->vf / (float)(1 << this->n_bit));
}

int Fixed::toInt( void )const{
    return (this->vf >> this->n_bit);
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
