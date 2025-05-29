#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

using std::string;

class MateriaSource : public IMateriaSource {
private:
	static const int MAX_MATERIAS = 4;
	AMateria* _materias[MAX_MATERIAS];
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);

public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria* target);
	AMateria* createMateria(string const& type);
};
#endif
