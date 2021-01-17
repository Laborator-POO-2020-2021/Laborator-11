#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras:public Localitate
{
	int bonus_venit;
public:
	Oras();
	Oras(const char*, int, int, int);	
	int getVenit();
	void afisare();
	Oras& operator=(const Oras&);
};

#endif
