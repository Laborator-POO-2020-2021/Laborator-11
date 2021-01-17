#ifndef TARA_HPP
#define TARA_HPP

#include <iostream>
#include <cstring>

#include "localitate.hpp"

using namespace std;

class Tara{
    Localitate **v;
public:
	Tara();
	Tara(Localitate**);
	~Tara();
	void afisare();
	int recensamant();
	int buget();
};

#endif
