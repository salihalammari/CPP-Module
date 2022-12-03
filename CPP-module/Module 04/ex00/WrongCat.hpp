#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public :
	WrongCat(void);
	WrongCat(const WrongCat& wc);
	virtual ~WrongCat(void);
	WrongCat& operator=(const WrongCat& wc);

	void makeSound(void) const;
};

#endif
