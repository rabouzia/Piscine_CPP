/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:48:37 by ramzerk           #+#    #+#             */
/*   Updated: 2024/09/27 00:03:33 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cstdio>
#include <iostream>
#include <cctype>

class phonebook
{
	char *tab[8];
};

class contact
{
	char 	*first_name;
	char 	*last_name;
	char 	*nick_name;
	int			number;
	char	*dark_secret;
};


#endif

