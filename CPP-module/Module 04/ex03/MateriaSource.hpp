#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private :
	AMateria* _inventory[INV_SIZE];
public :
	MateriaSource(void);
	MateriaSource(const MateriaSource& ms);
	virtual ~MateriaSource(void);
	MateriaSource& operator=(const MateriaSource& ms);
	void learnMateria(AMateria* am);
	AMateria* createMateria(const std::string& type);
};

#endif
