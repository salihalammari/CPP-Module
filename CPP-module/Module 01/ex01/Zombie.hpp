/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:23:12 by slammari          #+#    #+#             */
/*   Updated: 2022/11/23 20:29:50 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie 
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        void    announce();
        void    set_name(std::string name);
        ~Zombie();
};
    Zombie* zombieHorde(int N, std::string name);

#endif
