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
    Localitate(const char*,const int,const int);
    Localitate& operator = ( Localitate& obj);

    virtual void afisare();
    virtual int getLocuitori();
    virtual int getVenit();

    ~Localitate();
};

#endif
