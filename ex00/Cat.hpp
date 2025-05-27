#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

using std::string;

class Cat : public Animal {
private:
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);

public:
	Cat();
	~Cat();
};
#endif