#ifndef ORAS_HPP
#define ORAS_HPP

#include <iostream>
#include <cstring>

#include "localitate.hpp"

using namespace std;

class Oras: public Localitate {
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
public:
	Oras();
	Oras(const char*, int, int, int);
	void afisare();
	int getBonus();
};

#endif
