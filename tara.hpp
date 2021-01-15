#ifndef TARA_HPP
#define TARA_HPP
#include "localitate.hpp"

class Tara{
    Localitate **v;
public:
	Tara();
	Tara(Localitate**);
	~Tara();
	void afisare();
    int NrLoc();
    int VenitM();
};
#endif // TARA_HPP
