#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara{
        Localitate **v;
public:
	Tara();
	~Tara();
	Tara(Localitate**);
	int getNrLoc();
	float getVenit();
	void afisare();
};

#endif
