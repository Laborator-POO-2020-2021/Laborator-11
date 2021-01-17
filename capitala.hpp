#ifndef CAPITALA_HPP
#define CAPITALA_HPP
#include "oras.hpp"

class Capitala:public Oras
{
	char *tara;
	public:
		Capitala();
		Capitala(const char*,int,int,int,const char*);
		~Capitala();
		Capitala(const Capitala&);
		Capitala& operator=(const Capitala&);
		void afisare();
};
#endif
