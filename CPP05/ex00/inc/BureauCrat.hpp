/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:14 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/22 09:51:27 by ramzerk          ###   ########.fr       */
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
		const unsigned int _grade;

	public:

		BureauCrat ();
		BureauCrat (BureauCrat const &src);
		BureauCrat& operator=(BureauCrat const &rhs);
		~BureauCrat ();

		int getGrade();
		std::string getName();
		
};

#endif