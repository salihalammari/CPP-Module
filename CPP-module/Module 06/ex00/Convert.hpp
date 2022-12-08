/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:55:12 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 22:55:12 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cctype>
#include <cmath>
#include <limits>

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define PSEUDO 4
#define INVALID 5

class Convert
{
private :
	std::string _input;
	int _type;
	char _char;
	int _int;
	float _float;
	double _double;

	std::string _charErr;
	std::string _intErr;
	std::string _floatErr;
	std::string _doubleErr;

public :
	Convert(void);
	Convert(const char* str);
	Convert(const Convert& c);
	~Convert(void);
	Convert& operator=(const Convert & c);

	int checkNum(std::string num);
	void setType(void);
	int getType(void) const;
	void toChar(void);
	void toInt(void);
	void toDouble(void);
	void print(void);

	class InvalidArg : public std::exception
	{
	public :
		const char* what(void) const throw();
	};
};

#endif
