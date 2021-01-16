#ifndef CAPITALA_HPP
#define CAPITALA_HPP
#include "oras.hpp"

class Capitala:public Oras{
    char *tara;
public:
	Capitala();
	Capitala(const char*, int, int, int, const char*);
	virtual void afisare();
	virtual int getLocuitori();
	virtual int getVenit();
	~Capitala();
	
};

#endif
