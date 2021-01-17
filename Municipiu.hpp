#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include <iostream>
#include <cstring>

#include "Oras.hpp"

using namespace std;
class Municipiu:public Oras {
	protected:
		char *regiune;
	public:
		Municipiu();
		Municipiu(const char*,int,const char*,int,int);
		Municipiu(const Municipiu&);
		~Municipiu();
		
		Municipiu& operator=(const Municipiu&);
		void afisare();
		virtual int getLoc();
		virtual int getVenit();


};
#endif
