#ifndef CAPITALA_HPP
#define CAPITALA_HPP


#include "Oras.hpp"

class Capitala:public Oras{
	char *tara;
	
	public:
		Capitala();
		Capitala(const char*,const int,const int,const int,const char*);
		~Capitala();
		
		void afisare();
		Capitala& operator=(const Capitala&);
		friend ostream& operator<<(ostream &,const Capitala&);
};


#endif
