#ifndef TARA_HPP
#define TARA_HPP

#include "oras.hpp"

class Tara{
	Localitate **v; 
public:
	Tara();
	Tara(Localitate**);
	~Tara();
	
	void afisare();
	int getPop();
	float getVenitMed();
};

#endif
