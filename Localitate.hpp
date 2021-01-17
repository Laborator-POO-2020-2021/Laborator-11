#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP


#include <iostream>
#include <string.h>
#include <typeinfo>
using namespace std;

class Localitate {
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
	Localitate();
	Localitate(const char*, int, int);
	~Localitate();
	char* getNume();
	int getNrLoc();
	int getVenit();
	int getVenit1();
	virtual void afisare();
};

#endif
