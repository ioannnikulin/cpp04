#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

using std::string;

class WrongCat : public WrongAnimal {
private:
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);

public:
	WrongCat();
	~WrongCat();
};
#endif