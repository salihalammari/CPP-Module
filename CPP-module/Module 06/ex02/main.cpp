/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:25:58 by slammari          #+#    #+#             */
/*   Updated: 2022/12/08 19:08:59 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void)
{
	int random;

	srand(time(NULL));
	random = rand() % 3;
	std::cout << "<RANDOM>" << std::endl;
	if (random == 0)
	{
		std::cout << "Generated A" << std::endl << std::endl;
		return new A();
	}
	else if (random == 1)
	{
		std::cout << "Generated B" << std::endl << std::endl;
		return new B();
	}
	else
	{
		std::cout << "Generated C" << std::endl << std::endl;
		return new C();
	}
}

void identify(Base* p)
{
	if (A *a = dynamic_cast<A *>(p))
		std::cout << "A : Identify(Base* p) Success" << std::endl;
	else
		std::cout << "A : Identify(Base* p) Fail" << std::endl;
	if (B *b = dynamic_cast<B *>(p))
		std::cout << "B : Identify(Base* p) Success" << std::endl;
	else
		std::cout << "B : Identify(Base* p) Fail" << std::endl;
	if (C *c = dynamic_cast<C *>(p))
		std::cout << "C : Identify(Base* p) Success" << std::endl;
	else
		std::cout << "C : Identify(Base* p) Fail" << std::endl;
	std::cout << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A : Identify(Base& p) Success" << "\n";
		(void)a;
	}
	catch(const std::exception& e)
	{
		std::cout << "A : Identify(Base& p) Fail" << std::endl;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B : Identify(Base& p) Success" << "\n";
		(void)b;
	}
	catch(const std::exception& e)
	{
		std::cout << "B : Identify(Base& p) Fail" << std::endl;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C : Identify(Base& p) Success" << "\n";
		(void)c;
	}
	catch(const std::exception& e)
	{
		std::cout << "C : Identify(Base& p) Fail" << std::endl;
	}
	std::cout << std::endl;
}

int main(void)
{
	Base *ptr = generate();
	std::cout << "<POINTER>" << std::endl;
	identify(ptr);
	std::cout << "<REFERENCE>" << std::endl;
	identify(*ptr);

	delete ptr;
}
