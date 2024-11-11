/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:52:18 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/09 20:04:02 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>

PhonuBuku::PhonuBuku()
{
}

PhonuBuku::~PhonuBuku()
{
	std::cout << "Deleted phonebook" << '\n';
};

void PhonuBuku::add_contact(Contacto contact)
{
	contacts[contact_count % 8] = contact;
	set_count(contact_count++);
	int a = get_contact();
	std::cout << a << std::endl;
	std::cout << contact.GetFirstName() << std::endl;
	std::cout << contact.GetLastName() << std::endl;
	std::cout << contact.GetNickName() << std::endl;
	std::cout << contact.GetDarkSecret() << std::endl;
	std::cout << contact.GetNumber() << std::endl;
}
