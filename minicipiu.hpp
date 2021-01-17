#ifndef MINICIPIU_HPP
#define MINICIPIU_HPP

#include <iostream>
#include <cstring>

#include "oras.hpp"

using namespace std;

class Minicipiu: public Oras{
    char * regiune;
public:
	Minicipiu();
	Minicipiu(const char*, const char*, int, int, int);
	~Minicipiu();
	void afisare();
};

#endif
