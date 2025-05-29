#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

using std::string;

class WrongAnimal {
protected:
	string _type;
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal(const string& type);
	WrongAnimal& operator=(const WrongAnimal& other);

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	void makeSound() const;
	string getType() const;
};
#endif
