#include "ICharacter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ICharacter::ICharacter()
{
	std::cout << "🏗️ ICharacter Constructor 🏗️" << std::endl;
}

ICharacter::ICharacter( const ICharacter & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ICharacter::~ICharacter()
{
	std::cout << "💥 Character is destroyed 💥" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ICharacter &				ICharacter::operator=( ICharacter const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ICharacter const & i )
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