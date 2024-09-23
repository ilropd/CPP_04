/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:55:30 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/28 13:28:50 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "*** MAIN TEST #1 ***" << std::endl;
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

		std::cout << std::endl << std::endl;
	}

	{
		std::cout << "*** MAIN TEST #2 --- Try to learn more than 4 materias ***" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
        src->learnMateria(new Cure());
		std::cout << "VVV NEXT ONE CAN´T BE LEARNED, BECAUSE THERE IS NO MORE FREE SLOTS VVV" << std::endl;
		src->learnMateria(new Ice());

		delete src;

		std::cout << std::endl << std::endl;

	}

	{
		std::cout << "*** MAIN TEST #3 --- Try to equip and unequip materias and manipulate with different slots ***" << std::endl;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
		std::cout << "VVV NEXT ONE CAN´T BE EQUIPED, BECAUSE THE CHARACTER HAS NO MORE FREE SLOTS. YOU WILL SEE NOTHING ACCORDING TO THE SUBJECT. BUT YOU CAN TURN IT ON IN THE CODE. VVV" << std::endl;
		tmp = src->createMateria("ice");
        me->equip(tmp);


		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		std::cout << "VVV NEXT ONE CAN´T BE USED, BECAUSE THE SLOT DOESN'T EXIST. YOU WILL SEE NOTHING ACCORDING TO THE SUBJECT. BUT YOU CAN TURN IT ON IN THE CODE. VVV" << std::endl;
		me->use(4, *bob);

        me->unequip(0);
		me->unequip(1);
		me->unequip(2);
		me->unequip(3);
		std::cout << "VVV NEXT ONE CAN´T BE UNEQUIPED, BECAUSE SLOT IS ALREADY FREE. YOU WILL SEE NOTHING ACCORDING TO THE SUBJECT. BUT YOU CAN TURN IT ON IN THE CODE. VVV" << std::endl;
		me->unequip(0);

		tmp = src->createMateria("ice");

		bob->equip(tmp);
        bob->unequip(0);

        delete bob;
        delete me;
        delete src;

        std::cout << std::endl << std::endl;
    }

	{
		std::cout << "*** MAIN TEST #4 --- Checking Inventory capacity ***" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

        AMateria* tmp;

		for (int i = 0; i < 4; i++)
		{
			tmp = src->createMateria("ice");
			me->equip(tmp);
		}

		for (int i = 0; i < 4; i++)
        {
			me->unequip(i);
        }

		for (int i = 0; i < 4; i++)
        {
            tmp = src->createMateria("cure");
            me->equip(tmp);
        }

        for (int i = 0; i < 4; i++)
        {
            me->unequip(i);
        }

		delete me;
		delete src;
	}

	return 0;
}
