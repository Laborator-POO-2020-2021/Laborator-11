#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP
#include "oras.hpp"

class Municipiu: public Oras{
    char *regiune;
public:
	Municipiu();
	Municipiu(const char*,const char*,int,int,int);
	~Municipiu();
	void afisare();
};

#endif // MUNICIPIU_HPP
