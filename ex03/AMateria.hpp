#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

#include "ICharacter.hpp"

using std::string;

class ICharacter;

class AMateria {
private:
	AMateria(const AMateria& other);
	AMateria& operator=(const AMateria& other);
	AMateria();

protected:
	string _type;

public:
	AMateria(const string& type);
	virtual ~AMateria();
	string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) const = 0;
};
#endif
