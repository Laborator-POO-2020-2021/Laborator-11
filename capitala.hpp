//Barbuc Andreea 324AB
#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala: public Oras
{
        char *tara;
    public:
    	Capitala();
    	Capitala(const char*, int, int, int, const char*);
    	virtual void afisare();
    	~Capitala();
};

#endif
