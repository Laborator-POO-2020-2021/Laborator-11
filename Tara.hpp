#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara:public Localitate{
        Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL
public:
	Tara();
	Tara(Localitate **);
	Tara& operator=(const Tara*&);
	int total_locuitori(); //numarul de locuitori dintr-o tara
	double medie_venit(); //venitul unei tari calculat in functie de venitul localitatilor componente
	void afisare();
	~Tara();
};

#endif
