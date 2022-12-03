#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& wc) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	_type = wc.getType();
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wc)
{
	std::cout << "WrongCat copy assignation operator called" << std::endl;
	_type = wc.getType();
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Sound : Meow~ Meow~" << std::endl;
}