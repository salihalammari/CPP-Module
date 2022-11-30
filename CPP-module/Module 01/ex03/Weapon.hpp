/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:25:07 by slammari          #+#    #+#             */
/*   Updated: 2022/11/28 08:07:35 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP


#include <iostream>

class Weapon
{
    private:
            std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        std::string getType() const;
        void    setType(std::string _type);
        ~Weapon();  
};
#endif