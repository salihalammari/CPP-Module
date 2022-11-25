/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:02:27 by slammari          #+#    #+#             */
/*   Updated: 2022/11/25 05:02:28 by slammari         ###   ########.fr       */
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
		Fixed(const Fixed& src); //복사생성자
		Fixed(const float src);
		Fixed(const int src);
		Fixed &operator=(const Fixed &src); //할당생성자오버로딩
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &src);

# endif
