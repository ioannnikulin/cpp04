#include <iostream>

#include "AMateria.hpp"

using std::cout;
using std::endl;

#define CONSTRUCTOR_SELFPRESENT
#define DESTRUCTOR_SELFPRESENT

AMateria::AMateria():
	_type("AMateria")
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "AMateria default constructor called" << endl;
#endif
}

AMateria::AMateria(const string& type) :
	_type(type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "AMateria constructor called with type: " << type << endl;
#endif
}

AMateria::AMateria(const AMateria& other) :
	_type(other._type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "AMateria copy constructor called" << endl;
#endif
}

AMateria::~AMateria() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "AMateria destructor called" << endl;
#endif
}

AMateria& AMateria::operator=(const AMateria& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

string const& AMateria::getType() const {
	return _type;
}