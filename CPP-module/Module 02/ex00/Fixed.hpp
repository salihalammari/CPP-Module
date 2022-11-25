/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:14:33 by slammari          #+#    #+#             */
/*   Updated: 2022/11/25 05:14:34 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int					value;
		const static int	bit;
	public:
		Fixed( void );
		~Fixed( void );
		Fixed(const Fixed& src); //복사생성자
		Fixed &operator=(const Fixed &src); //할당생성자오버로딩

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

# endif