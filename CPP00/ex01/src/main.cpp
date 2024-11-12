/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:41:33 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/12 19:05:10 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "contact.hpp"
#include "phonebook.hpp"

// void search(Buku &book)
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
	for (std::string::const_iterator it = input.begin(); it != input.end(); ++it)
	{
		if (*it == '\t')
		{
			std::cout << "tab not allowed" << std::endl;
			return ("");
		}
	}
	if (input.empty())
	{
		std::cout << "Input can not be empty";
		getline(std::cin, input);
	}
	return (input);
}

bool safe_getline(std::string *str)
{
	if (!std::getline(std::cin, *str))
	{
		if (std::cin.eof())
		{
			std::cout << "ctrl d detected -> End of program." << std::endl;
			return (false);
		}
		else
		{
			std::cout << "Input error occurred. End of program" << std::endl;
			return (false);
		}
	}
	return (true);
}

int main(void)
{
	std::string input;
	Buku book = Buku();
	
	while (1)
	{
		std::cout << "What do you wanna do ? : ";
		if (!safe_getline(&input))
			break;
		if (input == "EXIT")
			break;
		if (input == "ADD")
			book.add();
		if (input == "SEARCH")
			book.search();
	}
	return (0);
}