/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:03:22 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 20:21:06 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::string num = "0123456789";
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		int t = i / 10;
		int o = i % 10;
		_ideas[i] = "idea 00";
		_ideas[i][5] = t + '0';
		_ideas[i][6] = o + '0';
	}
}

Brain::Brain(const Brain& b)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = b.getIdea(i);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& b)
{
	std::cout << "Brain copy assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = b.getIdea(i);
	return *this;
}

std::string Brain::getIdea(const int i) const
{
	return _ideas[i];
}

void Brain::setIdea(const int i, const std::string& idea)
{
	if (i > 100) 
		return ;
	else
		_ideas[i] = idea; // TODO : should be protected !
}
