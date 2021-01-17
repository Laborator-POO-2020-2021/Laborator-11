#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara:public Localitate{
	Localitate **v;
public:
	Tara();
	Tara(Localitate **);
	Tara& operator=(const Tara*&);
	~Tara();
	int getTotLoc();
	double getVenitMed();
	void afisare();
};

#endif
