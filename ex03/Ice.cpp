#include <iostream>

#include "Ice.hpp"

// #define CONSTRUCTOR_SELFPRESENT
// #define DESTRUCTOR_SELFPRESENT

using std::cout;
using std::endl;

Ice::Ice():
	AMateria("ice")
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Ice default constructor called" << endl;
#endif
}

Ice::Ice(const Ice& other) :
	AMateria(other._type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Ice copy constructor called" << endl;
#endif
}

Ice::~Ice() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "Ice destructor called" << endl;
#endif
}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

Ice* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) const {
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}
