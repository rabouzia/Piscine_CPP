/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:14 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/19 09:36:24 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class BureauCrat
{
	private:
		const std::string _name;

	public:

		BureauCrat();
		BureauCrat( BureauCrat const & src );
		BureauCrat &		operator=( BureauCrat const & rhs );
		~BureauCrat();

		int getGrade();
		std::string getName();
};

std::ostream &			operator<<( std::ostream & o, BureauCrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */