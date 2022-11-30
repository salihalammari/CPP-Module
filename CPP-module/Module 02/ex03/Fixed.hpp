/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:07:26 by slammari          #+#    #+#             */
/*   Updated: 2022/11/29 18:28:54 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
            int vf;
            const static int n_bit;
    public:
            Fixed();
            Fixed(const int i);
            Fixed(const float f);
            Fixed(const Fixed &copy);
            Fixed &operator=(const Fixed &src);
            bool operator>(const Fixed fixed) const;
            bool operator<(const Fixed fixed) const;
            bool operator>=(const Fixed fixed) const;
            bool operator<=(const Fixed fixed) const;
            bool operator==(const Fixed fixed) const;
            bool operator!=(const Fixed fixed) const;
            float operator+(const Fixed fixed) const;
            float operator-(const Fixed fixed) const;
            float operator*(const Fixed fixed) const;
            float operator/(const Fixed fixed) const;
            Fixed operator++();
            Fixed operator--();
            Fixed operator++(int);
            Fixed operator--(int);
            ~Fixed();
            static Fixed &min(Fixed &first, Fixed &second);
            static const Fixed &min(Fixed const &first, Fixed const &second);
            static Fixed &max(Fixed &first, Fixed &second);
            static const Fixed &max(Fixed const &first, Fixed const &second);
            int getRawBits( void ) const;
            void setRawBits( int const raw );
            float toFloat( void ) const;
            int toInt( void ) const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);

#endif
