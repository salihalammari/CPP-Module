/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:18 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 01:39:41 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private :
	RobotomyRequestForm(void);

public :
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& r);
	~RobotomyRequestForm(void);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& r);

	void execute(const Bureaucrat& b) const;
};

#endif