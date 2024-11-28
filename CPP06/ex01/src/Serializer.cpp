/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:52:42 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/28 10:52:52 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &source) {
	(void) source;
}

Serializer::~Serializer() {}

Serializer &Serializer::operator=(const Serializer &source) {
	(void) source;
	return *this;
}