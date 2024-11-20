/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:49:46 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 08:16:22 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "all.hpp"

class Cure : public AMateria
{
	private:
		std::string _type;

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();
		void setType();
		Cure &		operator=( Cure const & rhs );
		AMateria* Cure::clone() const;
		void setType(std::string type);
		std::string getType(void);

	private:

};

std::ostream &			operator<<( std::ostream & o, Cure const & i );

#endif /* ************************************************************ CURE_H */