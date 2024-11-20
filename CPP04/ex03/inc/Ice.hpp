/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:49:41 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 08:16:18 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "all.hpp"



class Ice : public AMateria
{

	private:
		std::string _type;

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();
		Ice &		operator=( Ice const & rhs );
		AMateria* clone() const;
		void use(ICharacter &target);
		void setType(std::string type);
		std::string getType(void);

};

std::ostream &			operator<<( std::ostream & o, Ice const & i );

#endif /* ************************************************************* ICE_H */