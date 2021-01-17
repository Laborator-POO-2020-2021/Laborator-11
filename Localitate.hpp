
#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP
#include <iostream>
#include <string.h>
using namespace std;

class Localitate
{
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(const char*, int, int);
    virtual void afisare();
    ~Localitate();
    int getVenit();
    int getNr_locuitori();

};

#endif // LOCALITATE_HPP
