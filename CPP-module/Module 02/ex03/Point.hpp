/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:07:35 by slammari          #+#    #+#             */
/*   Updated: 2022/11/29 18:28:59 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point{
    private:
            Fixed const x;
            Fixed const y;
    public:
            Point();
            Point(const float _x, const float _y);
            Point(const Point &point);
            Point &operator=(const Point &src);
            ~Point();
            const Fixed &getX(void)const;
            const Fixed &getY(void)const; 
};

#endif
