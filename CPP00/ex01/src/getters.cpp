/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:07:38 by rabouzia          #+#    #+#             */
/*   Updated: 2024/09/27 17:51:50 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string Contacto::GetFirstName()
{
	return (this->first_name);
}
std::string Contacto::GetLastName()
{
	return (this->last_name);
}
std::string Contacto::GetNickName()
{
	return (this->nick_name);
}
std::string Contacto::GetDarkSecret()
{
	return (this->dark_secret);
}
int	Contacto::GetNumber(void)
{
	return (this->number);
}