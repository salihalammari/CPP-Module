/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:23:12 by slammari          #+#    #+#             */
/*   Updated: 2022/11/18 05:31:46 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_hpp

# include <iostream>
# include <sstream>

class Zombie 
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        void    announce();
        void    set_name(std::string name);
        Zombie();
}
