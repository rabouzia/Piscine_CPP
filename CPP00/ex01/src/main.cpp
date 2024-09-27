/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:41:33 by ramzerk           #+#    #+#             */
/*   Updated: 2024/09/27 17:44:01 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	ADD(Contacto c, std::string input)
{
	int	i;

	(void)c;
	(void)input;
	i = 1;
	while (++i < 6)
	{
		break ;
	}
	return (1);
}

/* int SEARCH()
{
}
*/

// 	void	print_contacts(char *tab[8])
//  {
// 	while
//  	return ;
//  }

int	main(void)
{
	Contacto c;
	std::string input;

	c.SetFirstName("Test");

	while (1)
	{
		std::cout << "darkooo :"; //<< std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			ADD(c, input);

		if (input == "EXIT")
			break ;
	}
	return (0);
}