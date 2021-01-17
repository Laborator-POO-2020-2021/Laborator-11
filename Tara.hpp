#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara:public Localitate{
        Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
public:
	Tara();
	Tara(Localitate **);
	int getLocuitori();
	double getVenitMed();
	void afisare();
	~Tara();
};

#endif
