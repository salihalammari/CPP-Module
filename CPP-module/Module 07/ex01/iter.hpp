/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:27:21 by slammari          #+#    #+#             */
/*   Updated: 2022/12/09 00:31:46 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* arr, int len, void (*f)(const T&))
{
	if(f == NULL)
		return;
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void print(const T& arg)
{
	std::cout << arg << "  ";
}

#endif