#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "Oras.hpp"

class Capitala: public Oras
{
private:
	char *tara;
public:
	Capitala();
	Capitala(const char*, int, int, int, const char*);
	Capitala(const Capitala&);
	Capitala& operator=(const Capitala&);
	
	int getNrLoc();
	int getVenit();
	afisare();
	~Capitala();
};

#endif
