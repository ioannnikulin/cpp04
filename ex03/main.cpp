#include <iostream>

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

using std::cout;
using std::endl;

static void test0() {
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
}

static void test1() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("you");

	AMateria* tmp = NULL;
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("baby");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	ICharacter* bob = new Character("anyone");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	me->unequip(3);
	me->use(3, *bob);
	tmp = src->createMateria("baby");
	me->equip(tmp);
	me->use(3, *bob);
	me->unequip(4);

	delete bob;
	delete me;
	delete src;
}

int main() {
	test0();
	test1();
	return 0;
}
