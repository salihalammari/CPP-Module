/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:42:29 by slammari          #+#    #+#             */
/*   Updated: 2022/12/09 19:39:59 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {}

Span::~Span(void) {}

Span::Span(const Span& s) : _vector(s._vector) {}

Span::Span(unsigned int N)
{
	_vector.reserve(N);
}

Span& Span::operator=(const Span& s)
{
	if (this != &s)
	{
		_vector = s._vector;
	}
	return *this;
}

void Span::addNumber(int num)
{
	if (_vector.size() == _vector.capacity())
		throw NoSpaceException();
	_vector.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	std::vector<int>::iterator iter = begin;

	size_t diff = std::distance(begin, end);
	if (_vector.size() + diff > _vector.capacity())
		throw NoSpaceException();
	while (iter != end)
	{
		_vector.push_back(*iter);
		iter++;
	}
}

int Span::longestSpan(void)
{
	if (_vector.size() < 2)
		throw NotEnoughElementException();
	return *std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end());
}

int Span::shortestSpan(void)
{
	if (_vector.size() < 2)
		throw NotEnoughElementException();
	std::sort(_vector.begin(), _vector.end());
	int s = _vector[1] - _vector[0];
	for (size_t i = 0; i < _vector.size() - 1; i++)
		s = std::min(s, _vector[i + 1] - _vector[i]);
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
