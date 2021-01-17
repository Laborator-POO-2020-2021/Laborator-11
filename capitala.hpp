#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include"Oras.hpp"


class Capitala:public Oras
{
	protected:
		char* tara;

	public:
		Capitala();
		Capitala(const char*,int,int,int,const char*);
		~Capitala();
        void afisare();
};

#endif
