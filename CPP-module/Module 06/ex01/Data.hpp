/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:55:28 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 22:55:28 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

typedef struct s_Data
{
	int j;
	int  i;
	char c;
	
}t_Data;

typedef t_Data Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif
