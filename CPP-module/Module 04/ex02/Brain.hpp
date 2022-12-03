#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private :
	std::string _ideas[100];
public :
	Brain(void);
	Brain(const Brain& b);
	~Brain(void);
	Brain& operator=(const Brain &b);
	std::string getIdea(const int i) const;
	void setIdea(const int i, const std::string& idea);
};

#endif
