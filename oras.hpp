#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras: public Localitate {
	int bonus_venit;
public:
	Oras();
	Oras(const char*, int, int, int);

	int getVenitOras();
	void afisare();
};

#endif