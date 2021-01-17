#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"

class Tara{
    Localitate **v;
public:
	Tara();
	Tara(Localitate**);
	float getVenit();
	int getNrLoc();
	void afisare();
	
	~Tara();
};

#endif
