#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara: public Localitate
{
private:
	Localitate **v;
public:
	Tara();
	Tara(Localitate**);
	Tara(const Tara&);
    int nr_loc();
	int getVenit();
	void afisare();
};

#endif
