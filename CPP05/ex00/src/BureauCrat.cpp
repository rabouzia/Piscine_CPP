/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:27 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/22 10:26:51 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat(){}

BureauCrat::BureauCrat( const BureauCrat & src ){}

BureauCrat::~BureauCrat(){}

BureauCrat& BureauCrat::operator=( BureauCrat const & rhs ){
	return NULL;
}

int BureauCrat::getGrade(){
	try{
		if(_grade < 1)
			throw "neg";
		if(_grade > 150)
			throw "big";			
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	
}

std::string getName(){}