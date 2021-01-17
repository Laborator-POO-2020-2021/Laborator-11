#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Localitate{
	char *nume;
	int nr_locuitori;
	int venit_mediu;
public:
	Localitate();
	Localitate(const char*, int, int);
	Localitate& operator=(const Localitate&);
	~Localitate();
	int getLoc();
	int getVenit();
	virtual void afisare();
};

#endif
