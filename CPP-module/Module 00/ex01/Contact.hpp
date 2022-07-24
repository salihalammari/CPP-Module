/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:34:41 by slammari          #+#    #+#             */
/*   Updated: 2022/07/23 11:34:42 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
    
class Contact
{
    public:
        std::string f_name;
        std::string l_name;
        std::string nick_name;
        std::string ph_number;
        std::string d_secret;
};
#endif