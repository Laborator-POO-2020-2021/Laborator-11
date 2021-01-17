#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "Oras.hpp"

class Capitala: public Oras
{
    char *tara;
    
public:
	Capitala();
	Capitala(const char*, int, int, int, const char*);
	~Capitala();
	
	void afisare();
    //int getNrLocuitori();
    //int getVenit();
};

#endif
