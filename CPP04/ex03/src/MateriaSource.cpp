/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:34 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 08:17:03 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	std::cout << "🏗️ MateriaSource Constructor 🏗️" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
}

AMateria* MateriaSource::createMateria(std::string const & type){
	AMateria	*materia;

	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] && _slot[i]->getType() == type)
			return (_slot[i]->clone());
	}
	return NULL;
	// AMateria *mater = new AMateria(type);
	/*
	int i = 0;
	
	while (i < 4) {
		if (this->_storage[i] != NULL) {
			if (this->_storage[i]->getType() == type) {
				std::cout << "createMateria create a Materia with type " << type << std::endl;
				return this->_storage[i]->clone();
			}
		}
		i++;
	}
	std::cout << "createMateria can't create a Materia with type " << type << "!! Not learn." << std::endl;
	return NULL;
	*/
}


void MateriaSource::learnMateria(AMateria* spell){
	for (int i = 0; i < 4; i++){
		if (!_slot[i]){
			_slot[i] = spell;		
			break;
		}
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	std::cout << "💥 MateriaSource is destroyed 💥" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
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