/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:43:46 by slammari          #+#    #+#             */
/*   Updated: 2022/12/09 19:56:15 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <string>
#include <list>

void test_list(void)
{
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << list.back() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);
	std::list<int>::iterator lit = list.begin();
	std::list<int>::iterator lite = list.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> l(list);
}

void test_iterator(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void test_const_iterator(void)
{
	MutantStack<double> mstack;
	mstack.push(1.1);
	mstack.push(2.2);
	mstack.push(3.3);
	mstack.push(4.4);
	mstack.push(5.5);
	MutantStack<double>::const_iterator cit = mstack.begin();
	MutantStack<double>::const_iterator cite = mstack.end();
	++cit;
	--cit;
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}
}

void test_reverse_iterator(void)
{
	MutantStack<char> mstack;
	mstack.push('a');
	mstack.push('b');
	mstack.push('c');
	mstack.push('d');
	mstack.push('e');
	MutantStack<char>::reverse_iterator rit = mstack.rbegin();
	MutantStack<char>::reverse_iterator rite = mstack.rend();
	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
}

void test_const_reverse_iterator(void)
{
	MutantStack<std::string> mstack;
	mstack.push("Monday");
	mstack.push("TuesDay");
	mstack.push("WednesDay");
	mstack.push("ThursDay");
	mstack.push("FriDay");
	MutantStack<std::string>::const_reverse_iterator crit = mstack.rbegin();
	MutantStack<std::string>::const_reverse_iterator crite = mstack.rend();
	++crit;
	--crit;
	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		++crit;
	}
}

int main(void)
{
	std::cout << "==================List Test==================" << std::endl;
	test_list();
	std::cout << std::endl;

	std::cout << "================Iterator Test================" << std::endl;
	test_iterator();
	std::cout << std::endl;

	std::cout << "==========Const Iterator TestConst ==========" << std::endl;
	test_const_iterator();
	std::cout << std::endl;

	std::cout << "=========Reverse Iterator TestConst =========" << std::endl;
	test_reverse_iterator();
	std::cout << std::endl;

	std::cout << "======Const Reverse Iterator TestConst ======" << std::endl;
	test_const_reverse_iterator();
	std::cout << std::endl;

	return 0;
}
