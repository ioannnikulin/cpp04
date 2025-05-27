#include <iostream>

#include "Dog.hpp"

Dog::Dog():
	Animal("Dog")
{
}

Dog::Dog(const Dog& other) :
	Animal(other._type)
{
}

Dog::~Dog() {
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}