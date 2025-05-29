#include <iostream>

#include "ICharacter.hpp"

using std::cout;
using std::endl;

// #define CONSTRUCTOR_SELFPRESENT
// #define DESTRUCTOR_SELFPRESENT

ICharacter::ICharacter() {
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "ICharacter default constructor called" << endl;
#endif
}

ICharacter::ICharacter(const ICharacter& other) {
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "ICharacter copy constructor called" << endl;
#endif
	(void)other;
}

ICharacter::~ICharacter() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "ICharacter destructor called" << endl;
#endif
}

ICharacter& ICharacter::operator=(const ICharacter& other) {
	(void)other;
	return *this;
}
