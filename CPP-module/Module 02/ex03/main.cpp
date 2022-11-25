/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:07:28 by slammari          #+#    #+#             */
/*   Updated: 2022/11/25 05:07:29 by slammari         ###   ########.fr       */
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
        std::cout << "\033[32mTRUE\033[0m" << std::endl;
    else
        std::cout << "\033[31mFALSE\033[0m" << std::endl;
    return (0);
}
