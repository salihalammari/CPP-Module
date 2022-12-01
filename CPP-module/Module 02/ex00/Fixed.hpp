/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:14:33 by slammari          #+#    #+#             */
/*   Updated: 2022/11/30 19:29:40 by slammari         ###   ########.fr       */
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
		Fixed(const Fixed& src);
		Fixed &operator=(const Fixed &src);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

# endif