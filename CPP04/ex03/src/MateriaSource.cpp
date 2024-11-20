/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:34 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 19:02:02 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	std::cout << "🏗️ MateriaSource Constructor 🏗️" << std::endl;
}
MateriaSource::MateriaSource(std::string name){
	this->_name = name;
	
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}


MateriaSource::MateriaSource( const MateriaSource &src )
{
	*this= src;
}

AMateria* MateriaSource::createMateria(std::string const &type){

	for (int i = 0; i < 4; i++)
	{
		std::cout << i << std::endl;
		if (_slots[i] && _slots[i]->getType() == type)
		{
			std::cout << type << " created\n";
			return (_slots[i]->clone());
		}
	}
	return 0;

}


void MateriaSource::learnMateria(AMateria* spell){
	for (int i = 0; i < 4; i++){
		if (!_slots[i]){
			std::cout << spell->getType() << " is equped !" << std::endl;
			_slots[i] = spell->clone();	
			return ;	
		}
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "💥 MateriaSource is destroyed 💥" << std::endl;

}

MateriaSource &				MateriaSource::operator=( MateriaSource const &rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}