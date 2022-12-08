/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:43:42 by slammari          #+#    #+#             */
/*   Updated: 2022/12/08 16:43:43 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public :
	MutantStack(void) {}
	~MutantStack(void) {}
	MutantStack(const MutantStack& m)
	{
		*this = m;
	}
	MutantStack& operator=(const MutantStack& m)
	{
		if (this != & m)
		{
			std::stack<T>::operator=(m);
		}
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void)
	{
		return this->c.begin();
	}
	iterator end(void)
	{
		return this->c.end();
	}

	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator cbegin(void) const
	{
		return this->c.cbegin();
	}
	const_iterator cend(void) const
	{
		return this->c.cend();
	}

	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin(void)
	{
		return this->c.rbegin();
	}
	reverse_iterator rend(void)
	{
		return this->c.rend();
	}

	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	const_reverse_iterator crbegin(void) const
	{
		return this->c.crbegin();
	}
	const_reverse_iterator crend(void) const
	{
		return this->c.crend();
	}
};

#endif
