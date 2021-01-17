#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include <iostream>
#include <cstring>

#include "Oras.hpp"
using namespace std;
class Capitala:public Oras {
	protected:
		char *tara;
    public:
		Capitala();
		Capitala(const char*,int,const char*,int,int);
		Capitala(const Capitala&);
		~Capitala();

        Capitala& operator=(const Capitala&);
        void afisare();
        virtual int getLoc();
        virtual int getVenit();
	



};

#endif
