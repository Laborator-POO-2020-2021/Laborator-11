#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala:public Oras
{
        char *tara;
    public:
    	Capitala();
    	Capitala(const char*,const int,const char*,const int,const int);
    	Capitala(const Capitala&);
    	Capitala& operator=(const Capitala&);
    	int getVenit();
    	int getNr();
    	void afisare();
        char* getNume()const;
    	~Capitala();
};



#endif
