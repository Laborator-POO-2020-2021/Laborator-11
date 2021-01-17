#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP
#include "oras.hpp"

class Municipiu :  public Oras {

char *regiune;
public:
	Municipiu();
	Municipiu(const char*,int,int,int  ,const char* );
	~Municipiu();
	Municipiu(const  Municipiu&);
	Municipiu& operator=(const Municipiu&);
	void afisare();
//	int getVenit();
};
#endif
