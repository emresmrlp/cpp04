/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 17:45:07 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 19:07:21 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
    MateriaSource*	src;
	AMateria*		ice;
	AMateria*		cure;
	AMateria*		newIce;
	Character*		enemy;
	Character*		cadet;
	
	src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    enemy = new Character("Blackhole");
    cadet = new Character("Yunus");
    ice = src->createMateria("ice");
    cure = src->createMateria("cure");
    cadet->equip(cure);
    cadet->equip(ice);
    std::cout << "\n--[------  Welcome to the Materia World!  ------]--\n" << std::endl;
    cadet->use(0, *cadet);
    cadet->use(1, *enemy);
    cadet->unequip(0);
    newIce = src->createMateria("ice");
    cadet->equip(newIce);
    cadet->use(0, *enemy);
    std::cout << "\n--[------       End of the story          ------]--\n" << std::endl;
    delete src;
    delete cadet;
    delete enemy;

    return 0;
}