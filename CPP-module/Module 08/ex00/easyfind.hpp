/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:41:33 by slammari          #+#    #+#             */
/*   Updated: 2022/12/09 18:41:45 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>


template <typename T>
typename T::iterator easyfind(T container, int value)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	
	if (iter == container.end())
		throw std::out_of_range("NOT Found");
	return iter;
}

#endif
