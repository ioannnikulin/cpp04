#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

using std::string;

class Ice : public AMateria {
private:
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);

public:
	Ice();
	~Ice();
	Ice *clone() const;
	void use(ICharacter& target) const;
};
#endif
