/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:42:29 by slammari          #+#    #+#             */
/*   Updated: 2022/12/08 16:42:30 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {}

Span::~Span(void) {}

Span::Span(const Span& s) : _v(s._v) {}

Span::Span(unsigned int N)
{
	_v.reserve(N);
}

Span& Span::operator=(const Span& s)
{
	if (this != &s)
	{
		_v = s._v;
	}
	return *this;
}

void Span::addNumber(int num)
{
	if (_v.size() == _v.capacity())
		throw NoSpaceException();
	_v.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	std::vector<int>::iterator iter = begin;

	if (_v.size() == _v.capacity())
		throw NoSpaceException();
	while (iter != end)
	{
		_v.push_back(*iter);
		if (_v.size() == _v.capacity())
			break ;
		iter++;
	}
}

int Span::longestSpan(void)
{
	if (_v.size() < 2)
		throw NotEnoughElementException();
	return *std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end());
}

int Span::shortestSpan(void)
{
	if (_v.size() < 2)
		throw NotEnoughElementException();
	std::sort(_v.begin(), _v.end());
	int s = _v[1] - _v[0];
	for (size_t i = 0; i < _v.size() - 1; i++)
	{
		if (s > _v[i + 1] - _v[i])
			s = _v[i + 1] - _v[i];
	}
	return s;
}

const char* Span::NoSpaceException::what(void) const throw ()
{
	return "No Space Left";
}

const char* Span::NotEnoughElementException::what(void) const throw ()
{
	return "Not Enough Element";
}
