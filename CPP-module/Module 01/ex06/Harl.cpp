/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 04:55:09 by slammari          #+#    #+#             */
/*   Updated: 2022/11/25 04:55:10 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
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