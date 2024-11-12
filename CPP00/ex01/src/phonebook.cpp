/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:52:18 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/12 13:54:50 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "phonebook.hpp"
#include <iostream>

void PhonuBuku::search(void)
{
	std::cout << "INDEX |First Name|Last Name|Nick Name|" << std::endl;
	for (int i = 0; i < this->contact_count; i++)
		std::cout << i << "|" << this->get_contact(i).GetFirstName() << std::endl;
}