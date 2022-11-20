/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:04:09 by slammari          #+#    #+#             */
/*   Updated: 2022/11/16 15:25:54 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class	PhoneBook {

private:
	Contact	contact[8];
	int	contact_num;
	int size = 0;
	int	get_user_search_index();
	Contact	get_user_contact();
	void	show_contact_info(int index);
	void	show_contact_header();
	void	show_contact_fields(std::string field);
	void	show_contact(int index);

public:
	PhoneBook();
	int	get_contact_num();
	void	add_contact();
	void	search_contact();
	~PhoneBook();

};

#endif
