/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:07:28 by slammari          #+#    #+#             */
/*   Updated: 2022/11/29 18:29:34 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
	Point a(10, 0);
    Point b(0, 0);
    Point c(0, 10);
    Point p(0, 0);

    if (bsp(a, b, c, p) == true)
        std::cout << " TRUE " << std::endl;
    else
        std::cout << " FALSE " << std::endl;
    return (0);
}
