/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:40:24 by slammari          #+#    #+#             */
/*   Updated: 2022/11/23 20:40:24 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
            std::string name;
            Weapon &weapon;
    public:
            HumanA(std::string _name, Weapon &weapon); 
            void        attack();
            ~HumanA();
};

#endif
