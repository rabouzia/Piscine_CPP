/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:06:03 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/15 00:00:27 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>
#include <fstream>

void read_file(std::string filename, std::string s1, std::string s2)
{
    std::ifstream file;
    std::string buffer;
    std::ofstream replaced(filename + ".replace");
    
    file.open(filename);
    if (!file) std::cerr << "Can't open file!";
    while(std::getline(file, buffer))
    {        
        if (buffer.find(s1) != std::string::npos)
        replaced << buffer << std::endl;
    }
    file.close();
}

int main (int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    read_file(filename, s1, s2);
    return 0;
}