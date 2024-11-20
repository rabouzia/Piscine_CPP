/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:21 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 08:16:52 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
{
	std::cout << "🏗️ Cure Constructor 🏗️" << std::endl;
	_type = "cure";
}

Cure::Cure( const Cure & src )
{
}

void Cure::setType(std::string namu){
	_type = namu;
}


AMateria* Cure::clone() const{
	AMateria *b  = new Cure();
	return (b);		
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	std::cout << "💥 Cure is destroyed 💥" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cure const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */