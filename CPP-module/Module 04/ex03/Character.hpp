#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define INV_SIZE 4

#include "ICharacter.hpp"

class Character : public ICharacter
{
private :
	std::string _name;
	AMateria* _inventory[INV_SIZE];
public :
	Character(void);
	Character(const std::string& name);
	Character(const Character& c);
	virtual ~Character(void);
	Character& operator=(const Character& c);
	const std::string& getName(void) const;
	void equip(AMateria* am);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif