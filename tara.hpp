//Barbuc Andreea 324AB
#ifndef TARA_H
#define TARA_H

#include "localitate.hpp"

class Tara
{
        Localitate **v;// #hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
    public:
    	Tara();
    	Tara(Localitate**);
    	void afisare();
    	int VenitMediu();
    	int NrLocuitori();
    	~Tara();
};

#endif
