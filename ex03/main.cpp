/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:41:39 by anarama           #+#    #+#             */
/*   Updated: 2024/10/14 12:18:45 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void) {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	ICharacter* enemy = new Character("enemy");

	AMateria* tmp;
	AMateria* tmp1;
	AMateria* tmp2;
	AMateria* tmp3;
	AMateria* tmp4;
	
	tmp = src->createMateria("ice");
	tmp1 = src->createMateria("cure");

	// Creating unknown types 
	tmp2 = src->createMateria("curse");
	tmp3 = src->createMateria("wind");
	tmp4 = src->createMateria("darkness");
	
	me->equip(tmp);
	// equiping the same materia
	me->equip(tmp);
	
	me->equip(tmp1);
	// trying to equip invalid materias
	me->equip(tmp2);
	me->equip(tmp3);
	me->equip(tmp4);

	me->use(0, *enemy);
	me->use(1, *enemy);
	me->use(2, *enemy);
	me->use(3, *enemy);

	// trying to use out of the boundaries
	me->use(4, *enemy);
	me->use(5, *enemy);

	// trying to unequip out of the boundaries
	me->unequip(6);

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	delete enemy;
	
	return 0;
}