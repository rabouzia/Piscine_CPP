/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:16 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 19:22:14 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	std::cout << "🏗️ AMateria Constructor 🏗️" << std::endl;
	
}

AMateria::AMateria( const AMateria &src )
{
	*this = src;
}




/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << "💥 AMateria is destroyed 💥" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const &from )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	this->_type = from._type;
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &AMateria::getType(void) const{
	std::cout << _type << std :: endl;
	return (_type);
}


/* ************************************************************************** */