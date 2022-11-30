/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:52:02 by slammari          #+#    #+#             */
/*   Updated: 2022/11/29 16:39:54 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie 
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        void    announce();
        ~Zombie();
    
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
