#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>

#include "AMateria.hpp"

using std::string;

class IMateriaSource {
private:
	IMateriaSource(const IMateriaSource& other);
	IMateriaSource& operator=(const IMateriaSource& other);

protected:
	IMateriaSource();

public:
	virtual ~IMateriaSource();
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria * createMateria(string const& type) = 0;
};
#endif
