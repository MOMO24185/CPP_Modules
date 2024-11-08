/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:44:48 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/08 15:00:39 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
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

	Character joe("joe");
	Character joe2("joe2");
	joe.equip(src->createMateria("ice"));
	joe.equip(src->createMateria("cure"));

	joe2 = joe;
	joe2.use(0, joe2);

	me->use(0, *bob);
	me->use(1, *bob);

	bob->clone(&joe);
	bob->use(0, *me);

	delete bob;
	delete me;
	delete src;

	return 0;
}
