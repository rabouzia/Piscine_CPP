/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:27:31 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/27 15:43:15 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default form"), _signed(false),  {

}

Form::~Form(){
	
}

Form::Form(Form const &copy): _name(copy._name), _grade(copy._grade), _signed(copy._signed), _{
	
}

Form& Form::operator=(Form const &src){
	
}


const char * Form::what() const throw(){}

const char * Form::what() const throw(){}

std::string Form::getName(){return _name;}

bool Form::getSigned(){return _signed;}

int Form::getExec(){ return _exec;}

int Form::getGrade(){return _grade;}


void Form::beSigned(BureauCrat &const to_sign){
	if (to_sign.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	else if (_isSigned)
		std::cout << bureaucrat.getName() << " couldn't sign " << _name
				  << " because it is already signed." << std::endl;
	else {
		_isSigned = true;
	}
}


std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << form.getName() << ", bureaucrat grade " << form.getGrade() << "." << std::endl;
	return os;
}