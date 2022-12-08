/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:41:35 by slammari          #+#    #+#             */
/*   Updated: 2022/12/08 16:41:36 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main(void)
{
	std::vector<int> v;
	std::deque<int> d;
	std::list<int> l;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		d.push_back(i);
		l.push_back(i);
	}

	std::cout << "===========Vector Test===========" << std::endl;
	try
	{
		std::cout << "Value : ";
		std::cout << *easyfind(v, 7) << std::endl;
		std::cout << *easyfind(v, 12) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "===========Deque Test===========" << std::endl;
	try
	{
		std::cout << "Value : ";
		std::cout << *easyfind(d, 7) << std::endl;
		std::cout << *easyfind(d, 12) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "===========List Test===========" << std::endl;
	try
	{
		std::cout << "Value : ";
		std::cout << *easyfind(l, 7) << std::endl;
		std::cout << *easyfind(l, 12) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}
