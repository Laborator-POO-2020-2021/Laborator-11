//Antohi Sorin 324AB

#ifndef MUNICIPIU_H
#define MUNICIPIU_H

#include "oras.h"

class Municipiu:public Oras
{
	char *regiune;
	public:
		Municipiu();
		Municipiu(char*,int,int,int,char*);
		~Municipiu();
		friend ostream& operator<<(ostream&, const Municipiu&);
		Municipiu& operator=(const Municipiu);
		virtual void afisare();
};

#endif
