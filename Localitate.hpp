#ifndef LOCALITATE
#define LOCALITATE

#include <iostream>
#include <cstring>

using namespace std;

class Localitate{
public:
    char *nume;
    int nr_locuitori;
    int venit_mediu;

public:
    Localitate();
    Localitate(const char*, const int, const int);
    ~Localitate();
    Localitate& operator= (Localitate &x);
    virtual double Populatie();
    virtual double Venit();
    virtual void afisare();
};

#endif // LOCALITATE
