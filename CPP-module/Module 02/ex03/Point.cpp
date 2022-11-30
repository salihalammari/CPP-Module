/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:07:33 by slammari          #+#    #+#             */
/*   Updated: 2022/11/29 18:28:58 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) 
{}

Point::Point(const float _x, const float _y): x(_x), y(_y)
{}

Point::Point(const Point &point): x(point.getX()), y(point.getY())
{}

Point::~Point(){}

const Fixed &Point::getX(void)const
{
    return this->x;
}

const Fixed &Point::getY(void)const
{
    return this->y;
}

Point &Point::operator=(const Point &src)
{
    if (this == &src)
        return *this;
    return *this;
}
