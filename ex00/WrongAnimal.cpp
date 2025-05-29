#include <iostream>

#include "WrongAnimal.hpp"

#define CONSTRUCTOR_SELFPRESENT
#define DESTRUCTOR_SELFPRESENT

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal():
	_type("WrongAnimal")
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "WrongAnimal default constructor called" << endl;
#endif
}

WrongAnimal::WrongAnimal(const string& type) :
	_type(type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "WrongAnimal constructor called with type: " << type << endl;
#endif
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) :
	_type(other._type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "WrongAnimal copy constructor called" << endl;
#endif
}

WrongAnimal::~WrongAnimal() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "WrongAnimal destructor called" << endl;
#endif
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	cout << "silence of the " << getType() << endl;
}

string WrongAnimal::getType() const {
	return _type;
}
