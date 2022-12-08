/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:55:31 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 22:55:31 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data data;

	data.i = 1337;
	data.j = 42;
	data.c = 'd';

	std::cout << "--------- RESULT & CASTING --------" << std::endl;

	uintptr_t holder = serialize(&data);
	Data *dataReconv = deserialize(holder);
	std::cout << dataReconv->i << std::endl;
	std::cout << dataReconv->j << std::endl;
	std::cout << dataReconv->c << std::endl;
	
	return 0;
}
