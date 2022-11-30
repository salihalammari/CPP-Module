/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:06:07 by slammari          #+#    #+#             */
/*   Updated: 2022/11/29 18:28:47 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	fractional_bits= 8;
	public:
		Fixed( void );
		~Fixed( void );
		Fixed(const Fixed& src);
		Fixed(const float src);
		Fixed(const int src);
		Fixed &operator=(const Fixed &src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		bool operator>(const Fixed &src);
		bool operator<(const Fixed &src);
		bool operator>=(const Fixed &src);
		bool operator<=(const Fixed &src);
		bool operator==(const Fixed &src);
		bool operator!=(const Fixed &src);
		Fixed operator+(const Fixed &src);
		Fixed operator-(const Fixed &src);
		Fixed operator*(const Fixed &src);
		Fixed operator/(const Fixed &src);
		Fixed& operator++(); // pre-increment ++a
		Fixed& operator--(); // pre-decrement --a
		Fixed operator++(int); // post-increment a++
		Fixed operator--(int); // post-decrement a--
		static const Fixed &max(const Fixed &a, const Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		
};
std::ostream &operator<<(std::ostream &out, const Fixed &src);

# endif