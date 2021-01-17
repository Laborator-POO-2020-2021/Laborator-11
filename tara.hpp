#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"

class Tara{
	Localitate **v;
public:
	Tara();
	Tara(Localitate**);
	Tara(const Tara&);
	Tara& operator=(const Tara&);
	~Tara();
	
	void afisare();
	int getLoc();
	int getVenit();
};

#endif
