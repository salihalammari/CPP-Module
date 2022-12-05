/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:03:12 by slammari          #+#    #+#             */
/*   Updated: 2022/12/05 20:20:22 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected :
        std::string _type;
    public :
        Animal(void);
        Animal(const Animal& a);
        virtual ~Animal(void);
        Animal& operator=(const Animal& type);

        void setType(const std::string& type);
        std::string getType(void) const;
        virtual void makeSound(void) const;
};

#endif
