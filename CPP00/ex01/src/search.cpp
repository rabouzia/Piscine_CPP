/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:24:23 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/09 12:35:38 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contacto PhonuBuku::get_contact(PhonuBuku &book,int index)
{
	std::cout << book.contacts[index].GetFirstName << "\n"; 
	std::cout << book.contacts[index].GetLastName << "\n"; 
	std::cout << book.contacts[index].GetNickName << "\n"; 
	std::cout << book.contacts[index].GetDarkSecret << "\n"; 
	std::cout << book.contacts[index].GetNumber<< "\n"; 
}

void print_info(Contacto contact, int i)
{
	
}

void PhonuBuku::display(PhonuBuku pb)
{
	(void)pb;
	int i;
	int max;
	std::string index;

	i = 0;
	if (contacts[0] == NULL)
	{
		std::cout << "Your Phonebook is empty!!\n";
		return;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	while (i < 8)
	{
		if (contacts[i].isnull(contacts[i]))
			break;
		std::cout << "|" << std::setw(10) << i << "|";
		contacts[i].print_info(contacts[i], 1);
		std::cout << "|";
		contacts[i].print_info(contacts[i], 2);
		std::cout << "|";	
		contacts[i].print_info(contacts[i], 3);
		std::cout << "|\n";
		std::cout << "|-------------------------------------------|" << std::endl;
		i++;
	}
	max = i - 1;
	while (42)
	{
		std::cout << "Please select the index for more info:";
		getline(std::cin, index);
		index.erase(0, index.find_first_not_of(" \t\v\f\r"));
		while (std::isspace(index[index.length() - 1]))
			index.erase(index.find_last_not_of(" \t\v\r\f") + 1, index[index.length() - 1]);
		if (index.empty())
			continue;
		if (isnum(index, max))
			i = (int)index[0] - 48;
		else
		{
			std::cout << "Please enter a valid number >:(" << std::endl;
			continue;
		}
		contacts[i].display_complete(contacts[i]);
		break;
	}
}