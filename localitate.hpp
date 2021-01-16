#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP
#include <bits/stdc++.h>
using namespace std;


class Localitate {
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(const char*, int, int);
    ~Localitate();

    int getNrLocuitori();
    int getVenitMediu();
    char* getNume();
    virtual void afis();
};

#endif
