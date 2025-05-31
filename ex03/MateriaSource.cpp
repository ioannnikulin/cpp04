#include <iostream>

#include "MateriaSource.hpp"

using std::cout;
using std::endl;

// #define CONSTRUCTOR_SELFPRESENT
// #define DESTRUCTOR_SELFPRESENT

MateriaSource::MateriaSource() {
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "MateriaSource default constructor called" << endl;
#endif
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) :
	IMateriaSource()
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "MateriaSource copy constructor called" << endl;
#endif
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		_materias[i] = NULL;
		if (other._materias[i]) {
			_materias[i] = other._materias[i]->clone();
		}
	}
}

MateriaSource::~MateriaSource() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "MateriaSource destructor called" << endl;
#endif
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		delete _materias[i];
		_materias[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this == &other) {
		return *this;
	}
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		delete _materias[i];
		_materias[i] = NULL;
		if (other._materias[i]) {
			_materias[i] = other._materias[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* target) {
	if (!target) {
		return;
	}
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		if (!_materias[i]) {
			_materias[i] = target->clone();
			delete target;
			return ;
		}
	}
	delete target;
	cout << "MateriaSource: cannot learn more materias" << endl;
}

AMateria* MateriaSource::createMateria(string const& type) {
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		if (_materias[i] && _materias[i]->getType() == type) {
			return _materias[i]->clone();
		}
	}
	cout << "MateriaSource: no materia of type " << type << " found" << endl;
	return NULL;
}
