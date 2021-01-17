#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras: public Localitate
{
protected:
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
    
public:
	Oras();
	Oras(const char*, int, int, int);
	
	void afisare();
    int getNrLocuitori();
    int getVenit();
};

#endif
