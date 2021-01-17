#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <cstring>

using namespace std;

//clasa de 'baza'
class Localitate
{
    char *nume;
    int nr_locuitori;
    int venit_mediu;

public: //constructorii:
    Localitate();
    Localitate(const char*, int, int);
    ~Localitate();

    //metode normale, pentru aceasta clasa
    int getPopulatie();
    //metode virtuale, care vor fi folosite si in alte clase

    virtual int getVenit();

    virtual void afisare();
};





#endif // LOCALITATE_HPP
