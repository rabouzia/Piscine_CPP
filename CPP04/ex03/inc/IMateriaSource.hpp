/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:13 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/19 17:52:14 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <string>

class AMateria;

class IMateriaSource
{
	private:

	public:

		IMateriaSource();
		IMateriaSource( IMateriaSource const & src );
		~IMateriaSource();
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
		IMateriaSource &		operator=( IMateriaSource const & rhs );


};

std::ostream &			operator<<( std::ostream & o, IMateriaSource const & i );

#endif /* ************************************************** IMATERIASOURCE_H */