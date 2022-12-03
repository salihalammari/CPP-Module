#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public :
	virtual ~IMateriaSource(void) {}
	virtual void learnMateria(AMateria* am) = 0;
	virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif
