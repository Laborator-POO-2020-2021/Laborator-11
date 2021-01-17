#ifndef Capitala_HPP
#define Capitala_HPP
#include "Oras.hpp"

class Capitala:public Oras
{
    char* tara;
	public:
		Capitala();
		~Capitala();
		Capitala(char*, int, int, int, char*);
};


#endif
