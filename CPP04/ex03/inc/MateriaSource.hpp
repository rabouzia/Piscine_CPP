/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:10 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 08:16:06 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "all.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_slot[4];
		
	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );


};

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i );

#endif /* *************************************************** MATERIASOURCE_H */