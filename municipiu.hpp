#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "oras.hpp"

class Municipiu: public Oras{
    char * regiune;
public:
	Municipiu();
	Municipiu(const char *, int, const char*, int , int);
	void afisare();
	
	~Municipiu();
};


#endif
