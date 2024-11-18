/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:14:57 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/18 18:23:50 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "🏗️ Cat Constructor 🏗️" << std::endl;   
	this->burainu = new Brain();
}
 
Cat::Cat(const Cat &copy){
	this->burainu = copy.burainu;
	std::cout << "🏗️ Cat Copy Constructor 🏗️" << std::endl;   
    this->_type = copy._type;
}

Cat &Cat::operator=(const Cat &copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}
void Cat::makeSound() const{
    std::cout << "Meoowwwwww" << std::endl; 
}

std::string Cat::getType(void)const{
    return _type;
}

Cat::~Cat(){
    std::cout << "💥 Cat is destroyed 💥" << std::endl;
	delete this->burainu;
}