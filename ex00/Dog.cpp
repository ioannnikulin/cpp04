#include <iostream>
#include <stdlib.h>

#include "Dog.hpp"

#define CONSTRUCTOR_SELFPRESENT
#define DESTRUCTOR_SELFPRESENT

using std::cout;
using std::endl;

const string Dog::sounds[SOUND_SZ] = {"woof", "bark", "ruff"};

Dog::Dog():
	Animal("Dog")
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Dog default constructor called" << endl;
#endif
}

Dog::Dog(const Dog& other) :
	Animal(other._type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Dog copy constructor called" << endl;
#endif
}

Dog::~Dog() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "Dog destructor called" << endl;
#endif
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

void Dog::makeSound() const {
	cout << sounds[rand() % SOUND_SZ] << endl;
}
