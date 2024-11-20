/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:23 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 19:27:40 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria ()
{
	std::cout << "🏗️ Ice Constructor 🏗️" << std::endl;
	_type = "ice";
	std::cout << _type << std :: endl;
}

Ice::Ice(std::string _type){
	this->_type = _type;
}

Ice::Ice( const Ice &src )
{
	*this = src;
	_type = src.getType();
}
Ice *Ice::clone() const{
	return(new Ice(*this));		
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	std::cout << "💥 Ice is destroyed 💥" << std::endl;

}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const &rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */