/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:41:35 by slammari          #+#    #+#             */
/*   Updated: 2022/12/09 18:55:36 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main(void)
{
	std::vector<int> vector;
	std::deque<int> deque;
	std::list<int> list;

	for (int i = 0; i < 10; i++)
	{
		vector.push_back(i);
		deque.push_back(i);
		list.push_back(i);
	}

	std::cout << "===========Vector Test===========" << std::endl;
	try
	{
		std::cout << "Value : ";
		std::cout << *easyfind(vector, 6) << std::endl;
		std::cout << *easyfind(vector, 11) << std::endl;
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
		std::cout << *easyfind(deque, 9) << std::endl;
		std::cout << *easyfind(deque, 11) << std::endl;
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
		std::cout << *easyfind(list, 6) << std::endl;
		std::cout << *easyfind(list, 11) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}
