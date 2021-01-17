#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include "Problema_header_baza_Tufisi_Ionut_322AB.hpp"

class Localitate: public Baza {
protected:
   char *nume;
   int nr_locuitori;
   int venit_mediu;
public:
    Localitate();
	Localitate(const char*, int, int);
	void afisare();
	int getVenitMed();
	int getNrLoc();
	~Localitate();

};


#endif

