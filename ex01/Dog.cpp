#include <iostream>

#include "Dog.hpp"

#define CONSTRUCTOR_SELFPRESENT
#define DESTRUCTOR_SELFPRESENT

using std::cout;
using std::endl;

const string Dog::sounds[SOUND_SZ] = {"woof", "bark", "ruff"};

Dog::Dog():
	Animal("Dog")
	, _brain(new Brain())
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Dog default constructor called" << endl;
#endif
}

Dog::Dog(const Dog& other) :
	Animal(other._type)
	, _brain(new Brain(*other._brain))
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Dog copy constructor called" << endl;
#endif
}

Dog::~Dog() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "Dog destructor called" << endl;
#endif
	delete _brain;
	_brain = nullptr;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		delete _brain;
		_type = other._type;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

void Dog::makeSound() const {
	cout << sounds[rand() % SOUND_SZ] << endl;
}

void Dog::think() const {
	cout << "Dog thinks: ";
	_brain->think();
}