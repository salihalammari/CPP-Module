#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const std::string& type) : AMateria(type)
{
	std::cout << "Cure string constructor called" << std::endl;
}

Cure::Cure(const Cure& c) : AMateria(c.getType())
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& c)
{
	std::cout << "Cure copy assignation operator called" << std::endl;
	_type = c.getType();
	return *this;
}

AMateria* Cure::clone(void) const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
