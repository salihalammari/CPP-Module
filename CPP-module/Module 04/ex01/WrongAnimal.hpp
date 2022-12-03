#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected :
	std::string _type;
public :
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& wa);
	virtual ~WrongAnimal(void);
	WrongAnimal& operator=(const WrongAnimal& wa);

	void setType(const std::string& type);
	std::string getType(void) const;
	void makeSound(void) const;
};

#endif
