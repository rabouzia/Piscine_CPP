/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:58:23 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/15 10:06:56 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


void read_file(std::string filename, std::string s1, std::string s2)
{
    std::ifstream file;
    std::string buffer;
    size_t pos;
    file.open(filename);
    if (!file) 
    {   std::cerr << "Can't open file!"<< std::endl;
        file.close();
        return;
    }
    std::ofstream replaced(filename + ".replace");
    if(!replaced)
    { 
        std::cerr << "Can't create file" << std::endl;
        file.close();
        replaced.close();
        return;
    }
    while(std::getline(file, buffer))
    {        
        while ((pos =buffer.find(s1)) != std::string::npos)
        {
            buffer = buffer.erase(pos, s1.length());
            buffer = buffer.insert(pos, s2);
        }       
        replaced << buffer << std::endl;
    }
    file.close();
    replaced.close();
}