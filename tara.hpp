#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"

class Tara{
	Localitate **v;
public:
	Tara();
	Tara(Localitate**);
	~Tara();
	
//	friend ostream& operator<<(ostream&, const Tara&);
	void afisare();
	int getLocuitori();
	float getVenit();
};

#endif
