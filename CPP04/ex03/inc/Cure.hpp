#ifndef CURE_HPP
# define CURE_HPP


#include "AMateria.hpp"
# include <iostream>
# include <string>

class Cure : public AMateria
{
	private:
		std::string _type;

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );
		void setType(std::string type);
		std::string getType(void);

	private:

};

std::ostream &			operator<<( std::ostream & o, Cure const & i );

#endif /* ************************************************************ CURE_H */