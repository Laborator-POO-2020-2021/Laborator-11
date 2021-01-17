#ifndef TARA_HPP
#define TARA_HPP

#include "oras.hpp"

class Tara 
{
    Localitate **v; 
public:
    Tara();
    Tara(Localitate **);
    
    int NrLoc();
    int VenitMed();
	void afisare();
	~Tara();
};


#endif

