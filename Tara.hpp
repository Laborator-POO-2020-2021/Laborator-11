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
	Tara& operator=(const Tara&);
	Tara(const Tara&);
	
	int getNr();
	int getVnt();
	afisare();
	~Tara();	
};

#endif
