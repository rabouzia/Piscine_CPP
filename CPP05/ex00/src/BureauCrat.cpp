/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:27 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/26 08:48:12 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat(){}

BureauCrat::BureauCrat( const BureauCrat & src ){}

BureauCrat::~BureauCrat(){}

BureauCrat& BureauCrat::operator=( BureauCrat const & other ){
	if (this == &other)
		return *this;
	_grade = other._grade;
	*const_cast<std::string*>(&_name) = other._name;
	return *this;
}

std::string BureauCrat::getName(){return _name;}

int BureauCrat::getGrade(){return _grade;}

void BureauCrat::incrementGrade(){
	if (_grade == highestGrade)
		throw BureauCrat::GradeTooHighExecption();
	--_grade;
}

void BureauCrat::decrementGrade(){
	if (_grade == lowestGrade)
		throw BureauCrat::GradeTooLowExecption();
	++_grade;
}
