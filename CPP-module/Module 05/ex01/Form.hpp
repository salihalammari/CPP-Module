/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:18:31 by slammari          #+#    #+#             */
/*   Updated: 2022/12/06 04:55:39 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private :
	const std::string _name;
	bool _signed;
	const int _grade_sign;
	const int _grade_exec;

public :
	Form(void);
	Form(const std::string& name, const int& grade_sign, const int& grade_exec);
	Form(const Form& f);
	~Form(void);
	Form& operator=(const Form& f);

	const std::string& getName(void) const;
	bool getSigned(void) const;
	int getGradeSign(void) const;
	int getGradeExec(void) const;

	void beSigned(Bureaucrat b);
	
	class GradeTooHighException : public std::exception
	{
	public :
		const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public :
		const char* what(void) const throw();
	};
};
std::ostream& operator<<(std::ostream& o, const Form& f);

#endif
