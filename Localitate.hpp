#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <string.h>
using namespace std;

class Localitate
{
protected:
	char *nume;
	int nr_locuitori;
	int venit_mediu;
public:
	Localitate();
	Localitate(const char*, int, int);	
	~Localitate();	
	int getNrLocuitori();
	Localitate& operator=(const Localitate&);
	virtual int getVenit();
	virtual void afisare();
};

#endif
