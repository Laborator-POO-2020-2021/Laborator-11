#ifndef LOCALITATE_H
#define LOCALITATE_H

#include <iostream>
#include <cstring>
using namespace std;

class Localitate
{
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(const char*, int, int);
    int getLocuitori();
    int getVenitMediu();
    virtual int getWage();
    virtual void afisare();
    virtual ~Localitate();
};


#endif // LOCALITATE_H
