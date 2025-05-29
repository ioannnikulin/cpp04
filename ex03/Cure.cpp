#include <iostream>

#include "Cure.hpp"

// #define CONSTRUCTOR_SELFPRESENT
// #define DESTRUCTOR_SELFPRESENT

using std::cout;
using std::endl;

Cure::Cure():
	AMateria("cure")
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Cure default constructor called" << endl;
#endif
}

Cure::Cure(const Cure& other) :
	AMateria(other._type)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Cure copy constructor called" << endl;
#endif
}

Cure::~Cure() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "Cure destructor called" << endl;
#endif
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

Cure* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) const {
	cout << "* heals " << target.getName() << "'s wounds *" << endl;
}
