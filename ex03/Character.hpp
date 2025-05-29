#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::string;

class Character : public ICharacter {
private:
	static const int MAX_MATERIAS = 4;
	AMateria* _materias[MAX_MATERIAS];
	static const string DEFAULT_NAME;
	string _name;
	Character();
	Character(const Character& other);
	Character& operator=(const Character& other);

public:
	~Character();
	Character(const string& name);
	string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
#endif
