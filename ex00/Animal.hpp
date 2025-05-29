#ifndef ANIMAL_HPP
#define ANIMAL_HPP

using std::string;

class Animal {
protected:
	string _type;
	Animal(const Animal& other);
	Animal(const string& type);
	Animal& operator=(const Animal& other);

public:
	Animal();
	virtual ~Animal();
	virtual void makeSound() const;
	string getType() const;
};
#endif
