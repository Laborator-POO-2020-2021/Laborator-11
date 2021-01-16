#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Localitate 
{
protected:
    char *nume;
    int nr_locuitori;
    int venit_mediu;
    
public:
	Localitate();
	Localitate(const char *, int, int);
	Localitate &operator = (const Localitate &obj);
	virtual void afisare();
	virtual int getLocuitori();
	virtual int getVenit();
	~Localitate();
	
};

#endif


