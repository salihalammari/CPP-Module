/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:55:25 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 22:55:25 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	uintptr_t result;

	result = reinterpret_cast<uintptr_t>(ptr);
	return result;
}

Data *deserialize(uintptr_t raw)
{
	Data *result;

	result = reinterpret_cast<Data *>(raw);
	return result;
}
