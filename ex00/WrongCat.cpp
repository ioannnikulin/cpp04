#include <iostream>

#include "WrongCat.hpp"

#define CONSTRUCTOR_SELFPRESENT
#define DESTRUCTOR_SELFPRESENT

using std::cout;
using std::endl;

WrongCat::WrongCat():
	WrongAnimal("WrongCat")
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "WrongCat default constructor called" << endl;
#endif
}

WrongCat::WrongCat(const WrongCat& other) :
	WrongAnimal(other._type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "WrongCat copy constructor called" << endl;
#endif
}

WrongCat::~WrongCat() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "WrongCat destructor called" << endl;
#endif
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}