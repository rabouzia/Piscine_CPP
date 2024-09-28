/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:41:33 by ramzerk           #+#    #+#             */
/*   Updated: 2024/09/28 13:02:45 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	ADD(PhonuBuku *book, std::string input)
{
	int	i;
	(void)input;
	i = 0;
	
	while (++i < 6)
	{
		std::cout << "Please enter your first name";
		getline(cin, input);
		book[i].first_name = input;
		std::cout << "Please enter your last name";
		getline(cin, input);
		book[i].last_name = input;
		std::cout << "Please enter your nick name";
		getline(cin, input);
		book[i].nick_name = input;
		std::cout << "Please enter your darkest secret (its for blackmail)";
		getline(cin, input);
		book[i].dark_secret = input ;
		std::cout << "Please enter your phone number";
		getline(cin, input);
		
		book[i].number = std:: stoi(input);
		if (input == "EXIT")
			break;
		try
		{
			if(!input.empty())
				contact.number = input;
			else
				std::cerr << "Phone number cannot be empty.\n";
				continue;
		}
		catch (const std::invalid_argument &e) {
            std::cerr << "Invalid phone number format: " << e.what() << '\n';
            continue;  // 
        } catch (const std::out_of_range &e) {
            std::cerr << "Phone number is too large: " << e.what() << '\n';
            continue;  // Skip to the next iteration of the loop to re-enter data
	}
	book->a
	return (1);
}

int map_book (PhonuBuku *book)
{
	if (book[0] == NULL)
		return 0;
	if (book[7] != NULL)
		return 1;
	return 1;
}




void	SEARCH(Phonubuku *book)
{
	while()
	return ;
}

int	main(void)
{
	std::string input;
	Phonubuku *book;

	while (1)
	{
		std::cout << "What do you wanna do ? : "; 
		std::getline(std::cin, input);
		if (input == "ADD")
			ADD(book, input);
		if (input == "SEARCH")
			SEARCH(book);

		if (input == "EXIT")
		{
			delete book;
			break ;
		}
	}
	return (0);
}