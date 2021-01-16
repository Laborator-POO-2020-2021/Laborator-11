#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <cstring>
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
	Localitate& operator=(const Localitate&);
	
	char* getNume();
	int getNrLocuitori();
	int getVenitMediu();
	void afisare();
    ~Localitate();
    
};

#endif
