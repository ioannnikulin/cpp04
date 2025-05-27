#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

using std::string;

class Dog : public Animal {
private:
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);

public:
	Dog();
	~Dog();
};
#endif