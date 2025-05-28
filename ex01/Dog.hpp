#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

using std::string;

class Dog : public Animal {
private:
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	static const int SOUND_SZ = 3;
	static const string sounds[SOUND_SZ];
	Brain *_brain;

public:
	Dog();
	~Dog();
	void makeSound() const;
	void think() const;
};
#endif