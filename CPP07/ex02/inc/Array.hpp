/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/05 20:59:54 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <class T> class Array{
	
	private :
		T* _tab;
		unsigned int _len;
			
	public :
		
		Array():_tab(new T[0]), _len(0){}

		
		Array(const unsigned int &size):	_tab(new T[size]), _len(size){
			for (unsigned int i = 0; i < size; i++)
				_tab[i] = 0;
		}

		
		Array(const Array &array){
			_tab = new T[array.size()];
			_len = array.size();
			for (unsigned int i = 0; i < _len; i++)
				_tab[i] = array._tab[i];
		}
		
		~Array(){ delete[] _tab;}
		
		Array<T> &operator=(const Array &other)
		{
			if (this == &other)
				return (*this);
			delete[] _tab;
			_tab = new T[other.size()];
			_len = other.size();
			for (unsigned int i = 0; i < _len; i++)
				_tab[i] = other._tab[i];
			return (*this);
		}

		T &operator[](const int &index)
		{
			if (index < 0 || index >= (int)_len)
				throw std::invalid_argument("Index error : out of range");
			return (_tab[index]);
		}
		
		unsigned int size() const { return (_len);}
				
};

#endif