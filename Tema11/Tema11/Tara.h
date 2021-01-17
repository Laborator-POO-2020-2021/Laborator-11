#pragma once
#include "Localitate.h"

class Tara
{
	Localitate** v;
public:
	Tara();
	Tara(int max);
	Tara(Localitate**);
	~Tara();
	int getLocuitori();
	Localitate**& getLocalitati() { return this->v; };
	float getVenit();
};

