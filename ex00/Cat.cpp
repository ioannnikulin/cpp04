#include <iostream>

#include "Cat.hpp"

Cat::Cat():
	Animal("Cat")
{
}

Cat::Cat(const Cat& other) :
	Animal(other._type)
{
}

Cat::~Cat() {
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}