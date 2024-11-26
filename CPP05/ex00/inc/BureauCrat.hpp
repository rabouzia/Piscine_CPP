/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:14 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/26 08:26:02 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <stdexcept>

class BureauCrat
{
	private:

		static const int lowestGrade = 1;
		static const int highestGrade = 150;

		const std::string _name;
		unsigned int _grade;
		
	public:

		BureauCrat ();
		BureauCrat (BureauCrat const &src);
		BureauCrat& operator=(BureauCrat const &rhs);
		~BureauCrat ();

		int getGrade();
		std::string getName();

		void incrementGrade();
		void decrementGrade();
		
		class GradeTooHighExecption: public std::exception{
			public:
				virtual const char * what() const throw();
		};
		class GradeTooLowExecption: public std::exception{
			public:
				virtual const char * what() const throw();
		};
		
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif