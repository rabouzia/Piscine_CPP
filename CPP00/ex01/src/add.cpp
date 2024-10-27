/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:18:05 by rabouzia          #+#    #+#             */
/*   Updated: 2024/10/01 18:36:52 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int info_filler(PhonuBuku *book)
{
	fill_contact(book);
	return (1);
}

std::string get_input()
{
	std::string input;

	getline(std::cin, input);
	while ((input).empty())
	{
		std::cout << "Input can not be empty";
		getline(std::cin, input);
	}
	return (input);
}

int fill_contact(PhonuBuku *book)
{
	Contacto contact;
	std::cout << "Please enter your: \n";
	std::string input;
	std::cout << "First name: \n";
	input = get_input();
	contact.SetFirstName(input);
	std::cout << "Last name:\n";
	input = get_input();
	contact.SetLastName(input);
	std::cout << "Nick name:\n";
	input = get_input();
	contact.SetNickName(input);
	std::cout << "Darkest secret (its for blackmail):\n";
	input = get_input();
	contact.SetDarkSecret(input);
	std::cout << "Phone number:\n";
	input = get_input();
	contact.SetNumber(input);
	book->add_contact(contact);
	return 1;
}