//Antohi Sorin 324AB

#ifndef CAPITALA_H
#define CAPITALA_H

#include "oras.h"

class Capitala:public Oras
{
	char *tara;
	public:
		Capitala();
		Capitala(char*,int,int,int,char*);
		~Capitala();
		friend ostream& operator<<(ostream&, const Capitala&);
		Capitala& operator=(const Capitala);
		virtual void afisare();
};

#endif
