#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP				 


#include <iostream>
#include <string.h>
using namespace std;

class Localitate{
	char *nume;
	int nr_locuitori;
	int venit_mediu;
public:
	Localitate();
	Localitate(const char*, int, int);
	Localitate(const Localitate&);
	Localitate& operator=(const Localitate&);
	~Localitate();
	
	virtual void afisare();
	int getLoc();
	int getVenit();
};

#endif
