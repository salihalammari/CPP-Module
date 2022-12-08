/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:42:26 by slammari          #+#    #+#             */
/*   Updated: 2022/12/08 16:42:27 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(void)
{
	std::cout << "============Test 1============" << std::endl;
	try
	{
		Span sp1 = Span(5);
		sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		std::cout << "Shortest : ";
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << "Longest : ";
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "============Test 2============" << std::endl;
	try
	{
		Span sp2(10000);
		std::vector<int> v;
		for (int i = 0; i < 10000; i++)
			v.push_back(i);
		sp2.addNumber(v.begin(), v.end());
		std::cout << "Shortest : ";
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << "Longest : ";
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "============Test 3============" << std::endl;
	try
	{
		Span sp3(0);
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "============Test 4============" << std::endl;
	try
	{
		Span sp4(1);
		sp4.addNumber(10);
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "============Test 5============" << std::endl;
	try
	{
		Span sp5(0);
		sp5.addNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
