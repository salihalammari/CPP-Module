#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const std::string& type) : AMateria(type)
{
	std::cout << "Ice string constructor called" << std::endl;
}

Ice::Ice(const Ice& i) : AMateria(i.getType())
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& i)
{
	std::cout << "Ice copy assignation operator called" << std::endl;
	_type = i.getType();
	return *this;
}

AMateria* Ice::clone(void) const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
