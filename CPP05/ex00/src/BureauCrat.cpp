/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:27 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/19 09:47:08 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BureauCrat::BureauCrat()
{
	
}

BureauCrat::BureauCrat( const BureauCrat & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BureauCrat::~BureauCrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BureauCrat &				BureauCrat::operator=( BureauCrat const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, BureauCrat const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int getGrade(){
	
}
std::string getName(){
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */