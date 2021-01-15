#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "Oras.hpp"

class Municipiu: public Oras
{
private:
	char* regiune;
public:
	Municipiu();
	Municipiu(const char*, int, int, int, const char*);
	Municipiu(const Municipiu&);
	Municipiu& operator=(const Municipiu&);
	
	int getNrLoc();
	int getVenit();
	virtual afisare();
	~Municipiu();	
};

#endif
