#ifndef CAPITALA_H
#define CAPITALA_H

#include "Oras.h"

class Capitala :public Oras
{
private:
	char* tara;
public:
	Capitala();
	Capitala(const char*, int, int, int, const char*);
	Capitala(const Capitala&);
	Capitala& operator=(const Capitala&);
	friend ostream& operator<<(ostream&, Capitala &);
	void afisare(ostream&);
	~Capitala();
};

#endif