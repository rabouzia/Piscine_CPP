/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:35:12 by rabouzia          #+#    #+#             */
/*   Updated: 2024/09/28 17:04:13 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void Contacto::SetFirstName(std::string fn)
{
	this->first_name = fn;
}

void Contacto::SetLastName(std::string ln)
{
	this->last_name = ln;
}

void Contacto::SetNickName(std::string nn)
{
	this->nick_name = nn;
}

void Contacto::SetDarkSecret(std::string ds)
{
	this->dark_secret = ds;
}

void Contacto::SetNumber(std::string num)
{
	this->number = num;
}
