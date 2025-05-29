#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

using std::string;

class Cat : public Animal {
private:
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	static const int SOUND_SZ = 3;
	static const string sounds[SOUND_SZ];

public:
	Cat();
	~Cat();
	void makeSound() const;
};
#endif
