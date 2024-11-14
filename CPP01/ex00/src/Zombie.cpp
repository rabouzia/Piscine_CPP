/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:23:08 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/14 00:41:22 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
 std:: cout << ""
}

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void){
	return (this->_name);
}