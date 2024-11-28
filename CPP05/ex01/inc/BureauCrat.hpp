/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:14 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/27 14:42:47 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <stdexcept>

class Form;

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
		BureauCrat(std::string name, int grade);
		BureauCrat& operator=(BureauCrat const &rhs);
		~BureauCrat ();

		int getGrade () const;
		std::string getName() const;

		void incrementGrade();
		void decrementGrade();

		void signForm(Form &to_sign);

		
		class GradeTooHighExecption: public std::exception {
			public:
				virtual const char * what() const throw();
		};
		
		class GradeTooLowExecption: public std::exception {
			public:
			virtual	const char * what() const throw();
		};

};

std::ostream& operator<<(std::ostream& os, const BureauCrat& bureaucrat);

#endif