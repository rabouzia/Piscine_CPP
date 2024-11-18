/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:06:03 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/18 16:44:05 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << "======= Normal ========" << std::endl;
    {
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;
    }
    std::cout << "\n\n====== Wrong ========" << std::endl;
    {
        const WrongAnimal* a = new WrongAnimal();
        const WrongAnimal* b = new WrongCat();
        
        std::cout << b->getType() << " " << std::endl;
        b->makeSound();
        a->makeSound();
        
        delete a;
        delete b;
    }
    return 0;
}