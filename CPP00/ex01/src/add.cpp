/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:18:05 by rabouzia          #+#    #+#             */
/*   Updated: 2024/09/30 15:04:25 by rabouzia         ###   ########.fr       */
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

	std::string input;
	std::cout << "Please enter your first name: \n";
	input = get_input();
	contact.SetFirstName(input);
	std::cout << "Please enter your last name:\n";
	input = get_input();
	contact.SetLastName(input);
	std::cout << "Please enter your nick name:\n";
	input = get_input();
	contact.SetNickName(input);
	std::cout << "Please enter your darkest secret (its for blackmail):\n";
	input = get_input();
	contact.SetDarkSecret(input);
	std::cout << "Please enter your phone number:\n";
	input = get_input();
	contact.SetNumber(input);
	book->add_contact(contact);
	return 1;
}