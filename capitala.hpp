#ifndef CAPITALA_HPP
#define CAPITALA_HPP
#include "oras.hpp"

class Capitala: public Oras{
    char *tara;
public:
	Capitala();
	Capitala(const char*,const char*,int,int,int);
	~Capitala();
	void afisare();
};

#endif // CAPITALA_HPP
