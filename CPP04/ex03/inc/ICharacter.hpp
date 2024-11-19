/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:07 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/19 16:53:33 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP


#include "AMateria.hpp"
# include <iostream>
# include <string>

class ICharacter
{
	public:
		ICharacter();
		ICharacter( ICharacter const & src );
		ICharacter &		operator=( ICharacter const & rhs );
		virtual ~ICharacter() {}

		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

std::ostream &			operator<<( std::ostream & o, ICharacter const & i );

#endif /* ***************************************************** ICHARACTER_H */