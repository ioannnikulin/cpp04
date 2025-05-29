#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

using std::cout;
using std::endl;

static int correct() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	cout << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return 0;
}

static int wrong() {
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	cout << i->getType() << " " << endl;
	i->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	return 0;
}

int main() {
	correct();
	cout << "------------------------" << endl;
	wrong();
	return 0;
}
