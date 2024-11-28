/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:19:19 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/27 15:21:38 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP 
#define FORM_HPP

#include <iostream>

class BureauCrat;

class Form{

	private:
			const std::string _name;
			bool _signed;
			const int _grade;
			const int _exec;
	public:
		Form();
		~Form();
		Form(Form const &copy);
		Form& operator=(Form const &src);

		std::string 	getName();
		bool			getSigned();
		int 			getExec();
		int				getGrade();

		const char * what() const throw();
		const char * what() const throw();
		void beSigned(BureauCrat &const to_sign);
};


#endif