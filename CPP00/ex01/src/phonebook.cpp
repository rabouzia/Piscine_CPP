/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:52:18 by rabouzia          #+#    #+#             */
/*   Updated: 2024/09/30 20:32:52 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhonuBuku::PhonuBuku()
{
}

PhonuBuku::~PhonuBuku(){
	
};

void PhonuBuku::add_contact(Contacto contact)
{
	contacts[contact_count % 8] = contact;
	contact_count++;
	std::cout << contact.GetFirstName() << std::endl;
	std::cout << contact.GetLastName() << std::endl;
	std::cout << contact.GetNickName() << std::endl;
	std::cout << contact.GetDarkSecret() << std::endl;
	std::cout << contact.GetNumber() << std::endl;
}
