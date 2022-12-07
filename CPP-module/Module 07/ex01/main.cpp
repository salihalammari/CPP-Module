/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:27:42 by slammari          #+#    #+#             */
/*   Updated: 2022/12/06 00:27:43 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int main(void)
{
	char carr[5] = { 'a', 'b', 'c', 'd', 'e' };
	int iarr[5] = { 1, 2, 3, 4, 5 };
	float farr[5] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f };
	std::string sarr[5] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };

	std::cout << "============Char Array===========" << std::endl;
	iter(carr, 5, print);
	std::cout << std::endl << std::endl;
	std::cout << "============Int Array============" << std::endl;
	iter(iarr, 5, print);
	std::cout << std::endl << std::endl;
	std::cout << "============Float Array============" << std::endl;
	iter(farr, 5, print);
	std::cout << std::endl << std::endl;
	std::cout << "============String Array============" << std::endl;
	iter(sarr, 5, print);
	std::cout << std::endl << std::endl;
}