/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:41:33 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/12 13:58:01 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <contact.hpp>

std::string check_word_len(std::string to_check)
{
	if (to_check.length() >= 10)
		return (to_check);
	else
		return to_check;
}

// void search(PhonuBuku &book)
// {
// 	// int i;
// 	// i = 0;
// 	std::cout << "INDEX |First Name|Last Name|Nick Name|" << std::endl;
// 	for (int i = 0; i < book.contact_count; i++)
// 		std::cout << i << "|" << book.get_contact(i).GetFirstName() << std::endl;
// }

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

void add(std::string input, PhonuBuku &book)
{
	Contacto contact;
	std::cout << "Please enter your: \n";
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
	if (book.contact_count < 8)
		book.contact_count++;
	std::cout << book.contact_count << std::endl;
	book.add(contact);
}

int check(std::string input, PhonuBuku &book)
{
	if (input == "ADD")
		add(input, book);
	if (input == "SEARCH")
		book.search();
	return 1;
}

int main(void)
{
	std::string input;
	PhonuBuku book;

	while (1)
	{
		std::cout << "What do you wanna do ? : ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break;
		else
			check(input, book);
	}
	return (0);
}