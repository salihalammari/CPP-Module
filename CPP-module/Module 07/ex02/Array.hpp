/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:28:46 by slammari          #+#    #+#             */
/*   Updated: 2022/12/09 00:43:30 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <class T>
class Array
{
private :
	int _size;
	T* _arr;
public :
	Array(void) : _size(0), _arr(new T[NULL]) {}
	Array(unsigned int n) : _size(n), _arr(new T[n])
	{
		for (int i = 0 ; i < _size; i++)
			_arr[i] = 0;
	}
	Array(const Array& a) : _size(a._size), _arr(new T[a._size])
	{
		for (int i = 0 ; i < _size ; i++)
			_arr[i] = a[i];
	}
	~Array(void)
	{
		delete[] _arr;
		_arr = NULL;
	}
	Array& operator=(const Array& a)
	{
		if (this != &a)
		{
			delete[] _arr;
			_arr = NULL;
			_size = a._size;
			_arr = new T[_size];
			for (int i = 0 ; i < _size ; i++)
				_arr[i] = a[i];
		}
		return *this;
	}
	T& operator[](int idx)
	{
		if (idx < 0 || idx >= _size)
			throw OutOfBoundException();
		return _arr[idx];
	}
	const T& operator[](int idx) const
	{
		if (idx < 0 || idx >= _size)
			throw Array::OutOfBoundException();
		return _arr[idx];
	}
	class OutOfBoundException : public std::exception
	{
	public:
		const char* what(void) const throw()
		{
			return "Out of Bounds";
		}
	};
};

#endif