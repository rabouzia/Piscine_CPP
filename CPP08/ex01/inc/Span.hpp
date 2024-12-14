/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/14 10:29:04 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>
# include <set>


class Span{
	
	private:
		
	
	public:
		Span();
		Span(const Span &copy);
		Span operator=(const Span &src);
		~Span();
		

		
		int shortestSpan();
		int longestSpan();
		
}

#endif