//Antohi Sorin 324AB

#ifndef TARA_H
#define TARA_H

#include "localitate.h"

class Tara:public Localitate
{
	Localitate **v;
	public:
		Tara();
		Tara(Localitate**);
		~Tara();
		int locuitori();
		float venit();
		virtual void afisare();
};

#endif
