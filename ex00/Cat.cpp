#include <iostream>
#include <stdlib.h>

#include "Cat.hpp"

#define CONSTRUCTOR_SELFPRESENT
#define DESTRUCTOR_SELFPRESENT

using std::cout;
using std::endl;

const string Cat::sounds[SOUND_SZ] = {"meow", "purr", "hiss"};

Cat::Cat():
	Animal("Cat")
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Cat default constructor called" << endl;
#endif
}

Cat::Cat(const Cat& other) :
	Animal(other._type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Cat copy constructor called" << endl;
#endif
}

Cat::~Cat() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "Cat destructor called" << endl;
#endif
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

void Cat::makeSound() const {
	srand(time(0));
	cout << sounds[rand() % SOUND_SZ] << endl;
}
