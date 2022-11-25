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
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int i;
	for(i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			break;
		}
	}
	if (i == 4)
		std::cout << "[ NONE! ]" << std::endl <<
		"Probably complaining about insignificant problems." << std::endl;	
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
