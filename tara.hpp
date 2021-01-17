#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"
#include "oras.hpp"

class Tara
{
    Localitate **v; 
public:
	Tara();
	Tara(Localitate**);
	void afisare();
	int locuitori();
	int Ven();
	~Tara();
};

#endif

