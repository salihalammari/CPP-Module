/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:55:07 by slammari          #+#    #+#             */
/*   Updated: 2022/12/07 22:55:07 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) {}

Convert::~Convert(void) {}

Convert::Convert(const char *str) : _charErr("\0"), _intErr("\0"), _floatErr("\0"), _doubleErr("\0")
{
	if (!str) 
		throw std::invalid_argument("invalid input");
	this->_input = str;
	setType();
	switch (_type)
	{
	case CHAR :
		toChar();
		break ;
	case INT :
		toInt();
		break ;
	case FLOAT : case DOUBLE : case PSEUDO :
		toDouble();
		break ;
	}
}

Convert::Convert(const Convert& s)
{
	*this = s;
}

Convert& Convert::operator=(const Convert & c)
{
	_input = c._input;
	_type = c._type;
	_char = c._char;
	_int = c._int;
	_float = c._float;
	_double = c._double;
	return *this;
}

int Convert::checkNum(std::string num)
{
	for (int i = 0; i < static_cast<int>(num.size()); i++)
	{
		if (i == 0 && (num[i] == '-' || num[i] == '+'))
			continue ;
		if (!isnumber(static_cast<char>(num[i])))
			return i;
	}
	return -1;
}

void Convert::setType(void)
{
	if (!_input.compare("nan") || !_input.compare("nanf") ||
		!_input.compare("-nan") || !_input.compare("-nanf") ||
		!_input.compare("+nan") || !_input.compare("+nanf") ||
		!_input.compare("-inf") || !_input.compare("-inff") ||
		!_input.compare("inf") || !_input.compare("inff") ||
		!_input.compare("+inf") || !_input.compare("+inff"))
		_type = PSEUDO;
	else if (_input.size() == 1 && !isnumber(_input[0]) &&
			std::numeric_limits<char>::min() <= _input[0] &&
			std::numeric_limits<char>::max() >= _input[0])
		_type = CHAR;
	else if (checkNum(_input) == static_cast<int>(_input.find('f')))
		_type = FLOAT;
	else if (checkNum(_input) == static_cast<int>(_input.find('.')))
		_type = DOUBLE;
	else if (checkNum(_input) == -1)
		_type = INT;
	else
		_type = INVALID;
}

int Convert::getType(void) const
{
	return _type;
}

void Convert::toChar(void)
{
	_char = _input[0];
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
	if (!isprint(_char))
		_charErr = "Non displayable";
}

void Convert::toInt(void)
{
	int temp;

	temp = atoi(_input.c_str());
	_char = static_cast<char>(temp);
	_int = temp;
	_float = static_cast<float>(temp);
	_double = static_cast<double>(temp);
	if (temp > std::numeric_limits<char>::max() || temp < std::numeric_limits<char>::min())
		_charErr = "impossible";
	if (temp > std::numeric_limits<int>::max() || temp < std::numeric_limits<int>::min())
		_intErr = "impossible";
}

void Convert::toDouble(void)
{
	_double = atof(_input.c_str());
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
	if (_double == std::numeric_limits<double>::infinity())
	{
		_charErr = "impossible";
		_intErr = "impossible";
		_floatErr = "+inff";
		_doubleErr = "+inf";
	}
	else if (_double == -std::numeric_limits<double>::infinity())
	{
		_charErr = "impossible";
		_intErr = "impossible";
		_floatErr = "-inff";
		_doubleErr = "-inf";
	}
	else if (isnan(_double))
	{
		_charErr = "impossible";
		_intErr = "impossible";
		_floatErr = "nanf";
		_doubleErr = "nan";
	}
	else
	{
		if (_double > std::numeric_limits<char>::max() || _double < std::numeric_limits<char>::min())
			_charErr = "impossible";
		if (_double > std::numeric_limits<int>::max() || _double < std::numeric_limits<int>::min())
			_intErr = "impossible";
		if (_double > std::numeric_limits<float>::max() || _double < std::numeric_limits<float>::lowest())
			_floatErr = "impossible";
	}
}

void Convert::print(void)
{
	std::cout << "char: ";
	if (!_charErr.empty())
		std::cout << _charErr;
	else if (!isprint(_char))
		std::cout << "Non displayable";
	else
		std::cout << _char;
	std::cout << std::endl;

	std::cout << "int: ";
	if (!_intErr.empty())
		std::cout << _intErr;
	else
		std::cout << _int;
	std::cout << std::endl;

	std::cout << "float: ";
	if (!_floatErr.empty())
		std::cout << _floatErr;
	else
	{
		if (_float == static_cast<int64_t>(_float))
			std::cout << _float << ".0f";
		else
			std::cout << _float << "f";
	}
	std::cout << std::endl;

	std::cout << "double: ";
	if (!_doubleErr.empty())
		std::cout << _doubleErr;
	else
	{
		if (_double == static_cast<int64_t>(_double))
			std::cout << _double << ".0";
		else
			std::cout << _double;
	}
	std::cout << std::endl;
}

const char* Convert::InvalidArg::what(void) const throw()
{
	return ("Error : Invalid Argument\nUsage : ./convert [ literal ]");
}

