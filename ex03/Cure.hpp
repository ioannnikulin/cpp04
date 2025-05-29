#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

using std::string;

class Cure : public AMateria {
private:
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);

public:
	Cure();
	~Cure();
	Cure *clone() const;
	void use(ICharacter& target) const;
};
#endif
