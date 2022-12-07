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
	Data *before = new Data("Kim", 21, 180);

	uintptr_t ptr = serialize(before);
	Data *after = deserialize(ptr);
	before->print();
	after->print();
	delete before;
}
