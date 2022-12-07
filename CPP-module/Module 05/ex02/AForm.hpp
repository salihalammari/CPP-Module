/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:00 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 01:39:21 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"

class AForm
{
private :
	const std::string _name;
	bool _signed;
	const int _grade_sign;
	const int _grade_exec;

public :
	AForm(void);
	AForm(const std::string& name, const int& grade_sign, const int& grade_exec);
	AForm(const AForm& f);
	virtual ~AForm(void);
	AForm& operator=(const AForm& f);

	const std::string getName(void) const;
	bool getSigned(void) const;
	int getGradeSign(void) const;
	int getGradeExec(void) const;

	void beSigned(Bureaucrat b);

	virtual void execute(const Bureaucrat& b) const = 0;
	
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

	class NotSignedException : public std::exception
	{
	public :
		const char* what(void) const throw();
	};

	class FileErrorException : public std::exception
	{
	public :
		const char* what(void) const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif
