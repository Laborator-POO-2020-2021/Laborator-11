#ifndef _LOCALITATE_
#define _LOCALITATE_

#include <iostream>
#include<string.h>
//#include "localiatate.cpp"
using namespace std;

class Localitate {
    char *nume;
    int nr_locuitori;
    int venit_mediu;


    public:
    Localitate();
    Localitate(const char *, int, int);
    void afisare();
    int getNr_locuitori();
    char *getNume();
    int getVenit_mediu();
};
#endif
