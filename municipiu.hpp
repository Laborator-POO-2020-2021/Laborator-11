#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP
#include "oras.hpp"

class Municipiu:public Oras{
	char *regiune;
public:
	Municipiu();
	Municipiu(const char*, int, int, int, const char*);
	virtual void afisare();
	virtual int getLocuitori();
	virtual int getVenit();
	~Municipiu();
	
};

#endif
