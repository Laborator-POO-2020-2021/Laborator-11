#ifndef MUNICIPIU_H
#define MUNICIPIU_H

#include "Oras.h"

class Municipiu:public Oras
{
private:
	char* regiune;
public:
	Municipiu();
	Municipiu(const char*, int, int, int, const char*);
	Municipiu(const Municipiu&);
	Municipiu& operator=(const Municipiu&);
	friend ostream& operator<<(ostream&, Municipiu&);
	void afisare(ostream&);
	~Municipiu();
};

#endif
