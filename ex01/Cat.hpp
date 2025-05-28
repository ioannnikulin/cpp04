#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

using std::string;

class Cat : public Animal {
private:
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	static const int SOUND_SZ = 3;
	static const string sounds[SOUND_SZ];
	Brain *_brain;

public:
	Cat();
	~Cat();
	void makeSound() const;
	void think() const;
};
#endif