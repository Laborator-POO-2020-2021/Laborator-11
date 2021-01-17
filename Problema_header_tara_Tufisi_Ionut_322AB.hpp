#ifndef TARA_HPP
#define TARA_HPP

#include "Problema_header_baza_Tufisi_Ionut_322AB.hpp"
#include "Problema_header_localitate_Tufisi_Ionut_322AB.hpp"

class Tara: public Baza {
protected:
    Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
public:
    Tara();
	Tara(Localitate**);
	void afisare();
	int getVenitMed();
	int getNrLoc();

};


#endif
