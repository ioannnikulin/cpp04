#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

using std::string;

class Brain {
private:
	static const int VERBS_QTTY = 10;
	static const string _verbs[VERBS_QTTY];
	static const int OBJECTS_QTTY = 10;
	static const string _objects[OBJECTS_QTTY];
	static const int IDEAS_QTTY = 100;
	string _ideas[IDEAS_QTTY];
	Brain& operator=(const Brain& other);

public:
	Brain();
	~Brain();
	Brain(const Brain& other);
	void think() const;
};
#endif
