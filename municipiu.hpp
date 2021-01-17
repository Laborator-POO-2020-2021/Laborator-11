#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "oras.hpp"

class Municipiu:public Oras
{
        char *regiune;
    public:
    	Municipiu();
    	Municipiu(const char*,const int,const char*,const int,const int);
    	Municipiu(const Municipiu&);
    	Municipiu& operator=(const Municipiu&);
    	int getVenit();
    	int getNr();
    	char* getNume()const;
    	void afisare();
    	~Municipiu();
};



#endif
