/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:18 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 11:01:18 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	std::cout << "🏗️ Character Constructor 🏗️" << std::endl;
}
Character::Character(std::string name)
{
	_name = name;
	std::cout << "🏗️ Character Name Constructor 🏗️" << std::endl;
}

Character::Character( const Character & src )
{
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

Character &				Character::operator=( Character const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
std::string const & Character::getName () const{
	return(this->_name);
}
void Character::equip(AMateria* m){

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

void Character::use(int idx, ICharacter& target){

}
void Character::display_inventory(){
	
	
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */