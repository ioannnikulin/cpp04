#include <iostream>

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
	_brain = new Brain();
}

Cat::Cat(const Cat& other) :
	Animal(other._type)
	, _brain(new Brain(*other._brain))
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Cat copy constructor called" << endl;
#endif
}

Cat::~Cat() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "Cat destructor called" << endl;
#endif
	delete _brain;
	_brain = nullptr;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		_type = other._type;
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

void Cat::makeSound() const {
	cout << sounds[rand() % SOUND_SZ] << endl;
}

void Cat::think() const {
	cout << "Cat thinks: ";
	_brain->think();
}