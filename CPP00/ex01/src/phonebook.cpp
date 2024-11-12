/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:52:18 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/12 19:09:00 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "phonebook.hpp"
#include <iostream>

Buku::Buku()
{
	_contact_count = 0;
	std::cout << "PhoneBook created" << std::endl;
}

Buku::~Buku()
{
	std::cout << "PhoneBook destructed" << std::endl;
}

#include <string>

std::string check_word_len(std::string to_check)
{
	if (to_check.length() > 9)
		return to_check.substr(0, 9) + ".";
	if (to_check.length() < 9)
		to_check.append(9 - to_check.length(), ' ');
	return to_check;
}

void Buku::search(void)
{
	std::string input;

	std::cout << "|"
			  << std::setw(6) << "INDEX" << " |"
			  << std::setw(12) << "First Name" << " |"
			  << std::setw(12) << "Last Name" << " |"
			  << std::setw(12) << "Nick Name" << " |"
			  << std::endl;
	for (int i = 0; i < _contact_count; i++)
	{
		std::cout << "|"
				  << std::setw(6) << i << " |"
				  << std::setw(12) << check_word_len(_contacts[i].GetFirstName()) << " |"
				  << std::setw(12) << check_word_len(_contacts[i].GetLastName()) << " |"
				  << std::setw(12) << check_word_len(_contacts[i].GetNickName()) << " |"
				  << std::endl;
	}
	std::cout << "Who do you want to search ?:";
	input = get_input();
	if (input == "")
		return;
	get_contact(atoi(input.c_str()));
}

void Buku::add()
{
	Contacto contact;
	std::string input;

	std::cout << "Please enter your: \n";
	std::cout << "First name: ";
	input = get_input();
	if (input == "")
		return;
	contact.SetFirstName(input);
	std::cout << "\nLast name: ";
	input = get_input();
	contact.SetLastName(input);
	std::cout << "\nNick name: ";
	input = get_input();
	contact.SetNickName(input);
	std::cout << "\nDarkest secret (its for blackmail): ";
	input = get_input();
	contact.SetDarkSecret(input);
	std::cout << "\nPhone number: ";
	input = get_input();
	contact.SetNumber(input);
	_contacts[_contact_count] = contact;
	_contact_count = _contact_count < 7 ? _contact_count + 1 : 0;
	// std::cout << _contact_count << std::endl;
}

void Buku::get_contact(int index)
{
	std::cout << _contacts[index].GetFirstName() << std::endl;
	std::cout << _contacts[index].GetLastName() << std::endl;
	std::cout << _contacts[index].GetNickName() << std::endl;
	std::cout << _contacts[index].GetDarkSecret() << std::endl;
	std::cout << _contacts[index].GetNumber() << std::endl;
}
