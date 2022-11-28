/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 04:55:09 by slammari          #+#    #+#             */
/*   Updated: 2022/11/28 06:21:09 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void	Harl::complain( std::string level )
{
	void	(Harl::*funcs[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int i = ("DEBUG" == level) * 1
		+ ("INFO" == level) * 2
		+ ("WARNING" == level) * 3
		+ ("ERROR" == level) * 4;

	switch (i)
	{
		case 0:
			std::cout << "[ NONE! ]" << std::endl <<
			"Probably complaining about insignificant problems." << std::endl;
			break;	
		case 1:
			(this->*funcs[0])();
			i++;
			std::cout << std::endl;
		case 2:
			(this->*funcs[1])();
			i++;
			std::cout << std::endl;
		case 3:
			(this->*funcs[2])();
			i++;
			std::cout << std::endl;
		case 4:
			(this->*funcs[3])();
			i++;
	}
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl <<
	"Harl complains about debug." << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl <<
	"Harl complains about info." << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl <<
	"Harl complains about warning." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl <<
	"Harl complains about error." << std::endl;
}