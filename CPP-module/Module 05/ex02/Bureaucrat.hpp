/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:20:04 by slammari          #+#    #+#             */
/*   Updated: 2022/12/08 07:56:54 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#define GRADE_MAX 1
#define GRADE_MIN 150

class AForm;

class Bureaucrat
{
private :
	const std::string _name;
	int _grade;

public :
	Bureaucrat(void);
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& b);
	~Bureaucrat(void);
	Bureaucrat& operator=(const Bureaucrat& b);

	const std::string& getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);

	void signForm(AForm& f) const;

	void executeForm(const AForm& f) const;

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

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);

#endif
