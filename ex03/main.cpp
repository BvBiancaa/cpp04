/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:09:18 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/11 22:18:17 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		tmp = src->createMateria("ice");
		bob->equip(tmp);

		me->use(0, *bob);
		me->use(1, *bob);
		bob->use(0, *me);

		me->unequip(1);
		me->equip(NULL);
		me->equip(src->createMateria("cure"));
		me->use(1, *bob);

		ICharacter* john = new Character("john");
		me->use(0, *john);
		john->use(0, *me);

		delete src;
		delete bob;
		delete me;
		delete john;
	}

	return 0;
}