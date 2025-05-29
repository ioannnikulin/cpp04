#include <iostream>
#include <stdlib.h>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

using std::cout;
using std::endl;

int main() {
	srand(time(0));
	const int HERD_SZ = 10;
	Animal *herd[HERD_SZ];
	for (int i = 0; i < HERD_SZ; ++i) {
		if (i % 2 == 0)
			herd[i] = new Dog();
		else
			herd[i] = new Cat();
	}
	cout << endl;
	for (int i = 0; i < HERD_SZ; ++i) {
		herd[i]->makeSound();
		herd[i]->think();
		cout << endl;
	}
	for (int i = 0; i < HERD_SZ / 2; i ++) {
		delete herd[i];
		herd[i] = herd[i + HERD_SZ / 2];
	}
	for (int i = 0; i < HERD_SZ; ++i) {
		herd[i]->makeSound();
		herd[i]->think();
		cout << endl;
	}
	for (int i = 0; i < HERD_SZ / 2; ++i) {
		delete herd[i];
	}
	return 0;
}
