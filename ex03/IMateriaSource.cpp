#include <iostream>

#include "IMateriaSource.hpp"

using std::cout;
using std::endl;

// #define CONSTRUCTOR_SELFPRESENT
// #define DESTRUCTOR_SELFPRESENT

IMateriaSource::IMateriaSource() {
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "IMateriaSource default constructor called" << endl;
#endif
}

IMateriaSource::IMateriaSource(const IMateriaSource& other) {
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "IMateriaSource copy constructor called" << endl;
#endif
	(void)other;
}

IMateriaSource::~IMateriaSource() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "IMateriaSource destructor called" << endl;
#endif
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& other) {
	(void)other;
	return *this;
}
