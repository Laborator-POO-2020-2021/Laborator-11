#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara{
	Localitate **v;
	
public:
	Tara();
	Tara(Localitate **);
	
	void afisare();
	int getNrLocuitori();
	
	float getVenitMediu();
	
	~Tara();
	
};

#endif
