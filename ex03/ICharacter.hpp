#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

#include "AMateria.hpp"

using std::string;

class AMateria;

class ICharacter {
private:
	ICharacter(const ICharacter& other);
	ICharacter& operator=(const ICharacter& other);

protected:
	ICharacter();

public:
	virtual ~ICharacter();
	virtual string const& getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};
#endif
