#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include<iostream>
#include<cstdlib>
#include<cstring>
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
	Localitate(const Localitate&);
	Localitate& operator=(const Localitate&);
	virtual int nr_loc();
	int getVenit();
	virtual void afisare();
	~Localitate();
};

#endif
