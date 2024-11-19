#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
{
	std::cout << "🏗️ Cure Constructor 🏗️" << std::endl;

}

Cure::Cure( const Cure & src )
{
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