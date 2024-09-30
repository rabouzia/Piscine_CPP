/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:01:09 by rabouzia          #+#    #+#             */
/*   Updated: 2024/09/30 20:32:13 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"

class Contacto;

class PhonuBuku
{
private:
	Contacto contacts[8]; // Array to store 8 contacts
	int contact_count;	  // how may contact are store

public:
	PhonuBuku();
	~PhonuBuku();
	void add_contact(Contacto contact);
	Contacto get_contact(int index);
};

#endif
