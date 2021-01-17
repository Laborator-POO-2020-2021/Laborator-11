#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

using namespace std;
#include <iostream>
#include <cstring>

class Localitate
{
protected:
    char* nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate( const char*, int, int);
    Localitate( const Localitate& );
    Localitate& operator=( const Localitate& );

    virtual int getLocuitori();
    virtual int getVenitmediu();
    virtual void afisare();
	virtual ~Localitate();
	
};

#endif