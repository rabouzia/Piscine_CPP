/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:41:33 by ramzerk           #+#    #+#             */
/*   Updated: 2024/09/28 17:48:57 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

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

void add(PhonuBuku *book)
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
}

// int	map_book(PhonuBuku *book)
// {
// 	if (book[0] == NULL)
// 		return (0);
// 	if (book[7] != NULL)
// 		return (1);
// 	return (1);
// }

// void	search(PhonuBuku *book)
// {
// 	while ()
// 		return;
// }

int main(void)
{
	std::string input;
	PhonuBuku book;

	while (1)
	{
		std::cout << "What do you wanna do ? : ";
		std::getline(std::cin, input);
		if (input == "ADD")
			add(&book);
		// if (input == "SEARCH")
		// 	search(book);
		if (input == "EXIT")
		{
			// delete book;
			break;
		}
	}
	return (0);
}