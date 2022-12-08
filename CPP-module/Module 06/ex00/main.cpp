/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:55:15 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 22:55:15 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <sstream>

bool is_digit(char c)
{
	return c >= '0' && c <= '9';
}

void checkArg(std::string str)
{
	int dot = 0;
	int plus = 0;
	int minus = 0;
	int f = 0;
	int i = 0;

	if (str.empty())
		throw Convert::InvalidArg();
	for (i = 0; i < static_cast<int>(str.size()); i++)
	{
		if (str[i] == '.')
			dot++;
		else if (str[i] == '+')
			plus++;
		else if (str[i] == '-')
			minus++;
		else if (str[i] == 'f')
		{
			f++;
			break;
		}
	}
	if (str[++i] || dot > 1 || plus > 1 || minus > 1 || f > 2)
		 throw Convert::InvalidArg();
	if (plus && minus)
		throw Convert::InvalidArg();
	if (f == 2 && str.compare("inff") && str.compare("+inff") && str.compare("-inff"))
		throw Convert::InvalidArg();
}

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw Convert::InvalidArg();
		checkArg(argv[1]);
		std::stringstream ss;
		ss.str(argv[1]);
		Convert c(ss.str().c_str());
		if (c.getType() == INVALID)
			throw Convert::InvalidArg();
		c.print();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
