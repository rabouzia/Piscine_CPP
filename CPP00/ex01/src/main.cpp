/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:41:33 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/08 23:00:09 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

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

// void print_tab();
// void print_one();

// bool print_contact(PhonuBuku book)
// {
// 	print_tab();
// 	print_one();
// }

int input_check(std::string input, PhonuBuku &book)
{
	(void)input;
	std::cout << &book << '\n';
	// if (input == "ADD")
	// 	info_filler(book);
	// if (input == "SEARCH")
	// 	book.display();
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
			input_check(input, book);
	}
	return (0);
}