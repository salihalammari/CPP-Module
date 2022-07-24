/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    PhoneBook.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:04:09 by slammari          #+#    #+#             */
/*   Updated: 2022/07/23 10:36:23 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        int     n_contact;
        int     add_contact();
        void    rm_oldest();
        int     Add();
        void    print_table();
        void    Search(int i);
        int     print_phbook();

        PhoneBook();
        ~PhoneBook();
};

#endif
