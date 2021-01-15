//Antohi Sorin 324AB

#ifndef ORAS_H
#define ORAS_H

#include "localitate.h"

class Oras:public Localitate
{
	int bonus_venit;
	public:
		Oras();
		Oras(char*,int,int,int);
		~Oras();
		friend ostream& operator<<(ostream&, const Oras&);
		Oras& operator=(const Oras);
		virtual void afisare();
};

#endif
