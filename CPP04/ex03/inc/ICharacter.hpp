/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:07 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 08:17:44 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "all.hpp"

class ICharacter
{
	public:
		ICharacter();
		ICharacter( ICharacter const & src );
		ICharacter &		operator=( ICharacter const & rhs );
		virtual ~ICharacter();
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

std::ostream &			operator<<( std::ostream & o, ICharacter const & i );

#endif /* ***************************************************** ICHARACTER_H */