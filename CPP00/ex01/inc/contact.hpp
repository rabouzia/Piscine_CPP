/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:48:37 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/09 12:29:55 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "main.hpp"

class PhonuBuku;

class Contacto
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string dark_secret;
	std::string number;

public:
	void SetFirstName(std::string fn);
	void SetLastName(std::string ln);
	void SetNickName(std::string nn);
	void SetDarkSecret(std::string ds);
	void SetNumber(std::string num);

	std::string GetFirstName();
	std::string GetLastName();
	std::string GetNickName();
	std::string GetDarkSecret();
	std::string GetNumber();

	int add(PhonuBuku *book, std::string input);
};

#endif
