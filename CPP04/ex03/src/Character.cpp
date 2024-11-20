/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:18 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 19:03:05 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	std::cout << "🏗️ Character Constructor 🏗️" << std::endl;
	_name = "default";
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}
Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	std::cout << "🏗️ Character Name Constructor 🏗️" << std::endl;
}

Character::Character(const Character &src){
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << "💥 Character is destroyed 💥" << std::endl;
}


/*
	for(int i = 0; i < 3; i++)
			this->_slots = new Materia();
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const &src )
{
	if (this == &src)
		return (*this);
	
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
		{
			delete this->_slots[i];
			this->_slots[i] = NULL;
		}
		if (src._slots[i])
			this->_slots[i] = src._slots[i]->clone();
	}
	return (*this);
}



/*
** --------------------------------- METHODS ----------------------------------
*/
std::string const &Character::getName () const{
	return(this->_name);
}
void Character::equip(AMateria* m){
	if (!m)
	{
		std::cout << " Invalsssid stuff " << std::endl;
		return;
	}
	
	// std::cout << "Equipping materia" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (_slots[i] == NULL) {
			_slots[i] = m;
			std::cout << "Equipped " << m->getType() << " in slot " << i << std::endl;
			return;
		}
	}
	std::cout << "No empty slots available" << std::endl;
}

void Character::unequip(int i){
	if (!get_slot(i))
		return;
	std::cout << "*Unequips " << _slots[i]->getType() << " that was slot" << i << std::endl;
	  _slots[i] = NULL;
}

bool Character::get_slot(int i)
{
	if (i < 0 || i >= 4){	 
		std::cout << i << "invalid slot " << std::endl;
		return (false);
	}
	if (this->_slots[i] == NULL){
		std::cout << "slot is empty" << std::endl;
		return (false);
	}
	return true;
}

void Character::use(int i, ICharacter &target){
	if (get_slot(i) == false)
		return;
	std::cout << "Using " << this->_slots[i]->getType()
		<< " stored in slot " << i << "!" << std::endl;
	this->_slots[i]->use(target);

}
void Character::display_inventory(){
	
	
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */