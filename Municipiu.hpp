#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP


#include "Oras.hpp"

class Municipiu:public Oras{
	char *regiune;
	
	public:
		Municipiu();
		Municipiu(const char*,const int,const int,const int,const char*);
		~Municipiu();
		
		void afisare();
		Municipiu& operator=(const Municipiu&);
		friend ostream& operator<<(ostream& out,const Municipiu&);
};


#endif
