#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

class Ice
{

	private:
		std::string _type;

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		Ice &		operator=( Ice const & rhs );
		void setType(std::string type);
		std::string getType(void);

};

std::ostream &			operator<<( std::ostream & o, Ice const & i );

#endif /* ************************************************************* ICE_H */