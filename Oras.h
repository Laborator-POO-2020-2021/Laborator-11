#ifndef ORAS_H
#define ORAS_H

#include "Localitate.h"

class Oras:public Localitate
{
protected:
	int bonus_venit;
public:
	Oras();
	Oras(const char*, int, int, int);
	Oras(const Oras&);
	~Oras();
	Oras& operator=(const Oras&);
	int get_venit_mediu();
	friend ostream& operator<<(ostream&, Oras&);
	void afisare(ostream&);
};

#endif