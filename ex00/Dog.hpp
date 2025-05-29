#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

using std::string;

class Dog : public Animal {
private:
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	static const int SOUND_SZ = 3;
	static const string sounds[SOUND_SZ];

public:
	Dog();
	~Dog();
	void makeSound() const;
};
#endif
