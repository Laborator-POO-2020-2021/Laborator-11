//Barbuc Andreea 324AB
#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "oras.hpp"

class Municipiu: public Oras
{
        char *regiune;
    public:
    	Municipiu();
    	Municipiu(const char*, int, int, int, const char*);
    	virtual void afisare();
    	~Municipiu();
};

#endif
