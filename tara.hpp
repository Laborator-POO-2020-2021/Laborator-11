#ifndef TARA_HPP
#define TARA_HPP
#include "localitate.hpp"

class Tara{
    Localitate **v;
public:
	Tara();
	Tara(Localitate**);
	void virtual afisare();
	int NrLocuitori();
	virtual int getVenitTotal();
	Tara &operator = (const Tara &obj);
};

#endif
