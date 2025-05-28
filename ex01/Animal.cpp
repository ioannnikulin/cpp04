#include <iostream>

#include "Animal.hpp"

using std::cout;
using std::endl;

#define CONSTRUCTOR_SELFPRESENT
#define DESTRUCTOR_SELFPRESENT

Animal::Animal():
	_type("Animal")
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Animal default constructor called" << endl;
#endif
}

Animal::Animal(const string& type) :
	_type(type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Animal constructor called with type: " << type << endl;
#endif
}

Animal::Animal(const Animal& other) :
	_type(other._type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Animal copy constructor called" << endl;
#endif
}

Animal::~Animal() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "Animal destructor called" << endl;
#endif
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

void Animal::makeSound() const {
	cout << "silence of the " << getType() << endl;
}

string Animal::getType() const {
	return _type;
}