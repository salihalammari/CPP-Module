/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:07:28 by slammari          #+#    #+#             */
/*   Updated: 2022/11/30 22:23:14 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
	// Point a(10, 0);
    // Point b(0, 0);
    // Point c(0, 10);
    // Point p(0, 0);
    Point a(156.256, 2654.25);
    Point b(2564.25, 2654.25);
    Point c(5869.14, 548.87);
    Point p(1254.256, 2564.25);

    if (bsp(a, b, c, p) == true)
        std::cout << " TRUE " << std::endl;
    else
        std::cout << " FALSE " << std::endl;
    return (0);
}
