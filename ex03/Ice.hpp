#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

using std::string;

class Ice : public AMateria {
private:
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	static const int SOUND_SZ = 3;
	static const string sounds[SOUND_SZ];

public:
	Ice();
	~Ice();
	Ice *clone() const override;
	void use(ICharacter& target) const override;
};
#endif