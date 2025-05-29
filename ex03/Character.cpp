#include <iostream>

#include "AMateria.hpp"
#include "Character.hpp"

using std::cout;
using std::endl;

// #define CONSTRUCTOR_SELFPRESENT
// #define DESTRUCTOR_SELFPRESENT

const string Character::DEFAULT_NAME = "Tony";

Character::Character() :
	_name(DEFAULT_NAME)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Character default constructor called" << endl;
#endif
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		_materias[i] = NULL;
	}
}

Character::Character(const Character& other) :
	_name(other._name)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Character copy constructor called" << endl;
#endif
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		if (other._materias[i]) {
			_materias[i] = other._materias[i]->clone();
		} else {
			_materias[i] = NULL;
		}
	}	
}

Character::Character(const string& name) :
	_name(name)
{
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Character parameterized constructor called with name: " << name << endl;
#endif
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		_materias[i] = NULL;
	}
}

Character::~Character() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "Character destructor called" << endl;
#endif
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		delete _materias[i];
		_materias[i] = NULL;
	}
}

Character& Character::operator=(const Character& other) {
	(void)other;
	return *this;
}

string const& Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	if (!m) {
		return;
	}
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		if (!_materias[i]) {
			_materias[i] = m->clone();
			delete m;
			m = NULL;
			return;
		}
	}
	delete m;
	m = NULL;
	cout << "Cannot equip more materias, inventory full." << endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= MAX_MATERIAS || !_materias[idx]) {
		cout << "Invalid index or no materia to unequip." << endl;
		return;
	}
	delete _materias[idx];
	_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= MAX_MATERIAS || !_materias[idx]) {
		cout << "Invalid index or no materia to use." << endl;
		return;
	}
	_materias[idx]->use(target);
}
