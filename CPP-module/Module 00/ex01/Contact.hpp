/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:34:41 by slammari          #+#    #+#             */
/*   Updated: 2022/11/16 15:43:35 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
    
class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        Contact(std::string first_name,
            std::string last_name,
            std::string nickname,
            std::string phone_number,
            std::string darkest_secret);
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        int    check_empty();
        ~Contact();
        
};
             
#endif