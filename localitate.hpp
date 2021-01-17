//Barbuc Andreea 324AB
#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <string.h>
using namespace std;

class Localitate
{
	    char *nume;
        int nr_locuitori;
        int venit_mediu;
    public:
    	Localitate();
    	Localitate(const char*, int, int);
    	virtual void afisare();
    	int Nr_locuitori();
    	int Venit_mediu();
    	~Localitate();
};

#endif
