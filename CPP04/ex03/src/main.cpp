/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:47:12 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/19 19:41:28 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

















































int main(void) {
  AMateria *stock[4];


  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Init Materia]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
  for (int i = 0; i < 4; i++) {
    std::cout << "--[" << i << "]--" << std::endl;
    if (i % 2)
      stock[i] = new Ice();
    else
      stock[i] = new Cure();
  }

  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Init Character]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
  ICharacter *c1 = new Character("pepe");
  ICharacter *c2 = new Character("jojo");

  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Equip Materia to pepe]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
  for (int i = 0; i < 4; i++) {
    c1->equip(stock[i]);
  }

  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Try to re equip Materia to pepe]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
  for (int i = 0; i < 4; i++) {
    c1->equip(stock[i]);
  }
  
  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Pepe use Materia on jojo]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
  c1->use(1, *c2);
  c1->use(2, *c2);
  c1->use(1, *c2);

  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Pepe unequip some Materia]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
  c1->unequip(0);
  c1->unequip(1);
  c1->unequip(2);
  c1->unequip(3);

  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Destroy Materia]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
  for (int i = 0; i < 4; i++)
    delete stock[i];
  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Destroy Character]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
  delete c1;
  delete c2;
  return 0;
}