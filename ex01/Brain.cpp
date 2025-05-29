#include <iostream>
#include <stdlib.h>

#include "Brain.hpp"

using std::cout;
using std::endl;

#define CONSTRUCTOR_SELFPRESENT
#define DESTRUCTOR_SELFPRESENT

const string Brain::_verbs[] = {
	"eat"
	, "chase"
	, "fetch"
	, "chew"
	, "hide"
	, "dig up"
	, "sniff"
	, "love"
	, "dream of"
	, "stare at"
};

const string Brain::_objects[] = {
	"bone"
	, "ball"
	, "stick"
	, "toy"
	, "my human"
	, "food"
	, "grass"
	, "tree"
	, "postman"
	, "neighbor"
};

Brain::Brain() {
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Brain default constructor called" << endl;
#endif
	for (int i = 0; i < IDEAS_QTTY; ++i) {
		_ideas[i] = _verbs[rand() % VERBS_QTTY] + " " + _objects[rand() % OBJECTS_QTTY];
	}
}

Brain::Brain(const Brain& other) {
#ifdef CONSTRUCTOR_SELFPRESENT
	cout << "Brain copy constructor called" << endl;
#endif
	for (int i = 0; i < IDEAS_QTTY; ++i) {
		_ideas[i] = other._ideas[i];
	}
}

Brain::~Brain() {
#ifdef DESTRUCTOR_SELFPRESENT
	cout << "Brain destructor called" << endl;
#endif
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < IDEAS_QTTY; ++i) {
			_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

void Brain::think() const {
	cout << _ideas[rand() % IDEAS_QTTY] << endl;
}
