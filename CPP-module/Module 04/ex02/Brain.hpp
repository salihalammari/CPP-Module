/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:33:38 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 20:29:13 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
