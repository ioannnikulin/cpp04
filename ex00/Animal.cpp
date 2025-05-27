#include <iostream>

#include "Animal.hpp"

using std::cout;
using std::endl;

Animal::Animal():
	_type("Animal")
{
}

Animal::Animal(const string& type) :
	_type(type)
{
}

Animal::Animal(const Animal& other) :
	_type(other._type)
{
}

Animal::~Animal() {
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

void Animal::makeSound() const {
	cout << _type << " sound" << endl;
}