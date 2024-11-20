/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:03 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 10:41:29 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "all.hpp"


class Character : public ICharacter
{
	private:
		std::string _name;	
		AMateria* _slots[4];
		
	public:

		Character();
		Character( Character const & src );
		~Character();
		Character(std::string name);
		
		Character &		operator=( Character const & rhs );

		std::string const & getName() const;
		void equip(AMateria* m);
		bool get_slot(int i);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void display_inventory();

	private:

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */