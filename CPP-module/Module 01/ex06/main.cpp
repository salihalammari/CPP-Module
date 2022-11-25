#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl Harl;

	(void)argc;
	if (argc != 2)
		return(0);
	Harl.complain(argv[1]);
}