
#ifndef LOCALITATE_H
#define LOCALITATE_H

#include <cstring>
#include <iostream>
using namespace std;

class Localitate{
private:
    char* nume;
    int nr_locuitori;
    int venit_mediu;

public:
    Localitate();
    Localitate(const char*, int, int);
    Localitate& operator = (const Localitate&);
    int getVenit();
    int getLocuitori();
    virtual void afisare();
    ~Localitate();
};
#endif