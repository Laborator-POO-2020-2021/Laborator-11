#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include <iostream>
#include <cstring>

#include "oras.hpp"

using namespace std;

class Capitala: public Oras{
    char * tara;
public:
	Capitala();
	Capitala(const char*, const char*, int, int, int);
	~Capitala();
	void afisare();
};

#endif
