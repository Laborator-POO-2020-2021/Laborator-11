#include <iostream>
#include <cstring>
using namespace std;

#ifndef LOCALITATE
#define LOCALITATE

#include "Oras.hpp"

class Localitate : public Oras
{
        char *nume;
        int nr_locuitori;
        int venit_mediu;

public:
    Localitate();
    Localitate(char *, char *, int ,char *, int , int  );
    void afisare();
    int getNrloc();
    int getVenit();
};

#endif

