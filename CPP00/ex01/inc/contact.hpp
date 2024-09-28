/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:48:37 by ramzerk           #+#    #+#             */
/*   Updated: 2024/09/28 10:42:26 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"
#include "phonebook.hpp"


class Contacto
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string dark_secret;
	int number;

  public:
	void SetFirstName(std::string fn);
	void SetLastName(std::string ln);
	void SetNickName(std::string nn);
	void SetDarkSecret(std::string ds);
	void SetNumber(int num);

	std::string GetFirstName();
	std::string GetLastName();
	std::string GetNickName();
	std::string GetDarkSecret();
	int GetNumber();
};

int	ADD(PhonuBuku *book, std::string input);


#endif
