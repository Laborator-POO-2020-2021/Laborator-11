#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras:public Localitate{
	int bonus_venit; //venit oras = venit localitate + bonus venit.
public:
	Oras();
	Oras(int, const char*, int, int);
	Oras& operator=(const Oras&);
	int getTotVenit();
	void afisare();
};

#endif
