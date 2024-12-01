/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:44:39 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/01 22:11:30 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>

void printImpossible()
{
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : impossible" << std::endl;
    std::cout << "double : impossible" << std::endl;
}

// void printChar(char c)
// {
	
// 	else
// 		std::cout << "char: " << c << std::endl;
// }

bool isPseudoLiteral(std::string &str)
{
    if (str == "nan" || str == "nanf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
    else if (str == "-inf" || str == "-inff")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : -inff" << std::endl;
        std::cout << "double : -inf" << std::endl;
    }
    else if (str == "+inf" || str == "+inff")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : +inff" << std::endl;
        std::cout << "double : +inf" << std::endl;
    }
    else
        return (0);
    return (1);
}

void displayChar(std::string &str)
{
	// if (str.length() == 1 && !isdigit(str[0]))
	// {
		if (std::isprint(static_cast<unsigned char>(str[0])) == false)
			std::cout << "char: Non Displayable" << std::endl;
		else {
			std::cout << "char: '" << str[0] << "'" << std::endl;
			std::cout << "int: " << static_cast<int> (str) << std::endl;
			std::cout << "float: " << static_cast<float> (str) << "f" << std::endl;
			std::cout << "double: " << static_cast<double> (str)<< std::endl;
			std::exit(0);
		}
		// return;
	// }
	// std::cout << "char: impossible" << std::endl;
}

void displayInt(std::string &str)
{
	std::stringstream tab;
	long nb;
	tab << str;
	tab >> nb;
	
	if (tab.fail() || nb > INT_MAX || nb < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
}

void displayFloat(std::string &str)
{
	std::stringstream tab;
	float nb;
	tab << str;
	tab >> nb;
	
	if (tab.fail())
		std::cout << "float: impossible";
	else
	{
		std::cout << "float: " << nb;
		if (roundf(nb) == nb)
        	std::cout << ".0" << "f";
        else
			std::cout << "f";
	}
	std::cout << std::endl;
}

void displayDouble(std::string &str)
{
	std::stringstream tab;
	double nb;
	tab << str;
	tab >> nb;
	
	if (tab.fail())
		std::cout << "double: impossible";
	else
	{
		std::cout << "double: " << nb;
		if (roundf(nb) == nb)
        	std::cout << ".0";
	}
	std::cout << std::endl;
}

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &scalar)
{
    *this = scalar;
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalar)
{
    (void)scalar;
    return (*this);
}

void ScalarConverter::convert(std::string &str)
{
    if (isPseudoLiteral(str))
        return ;
    try
    {
        displayChar(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        displayInt(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        displayFloat(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        displayDouble(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}