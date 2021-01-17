#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP


#include <iostream>
#include <cstring>
using namespace std;

class Localitate {
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(const char*, int, int);
    Localitate(const Localitate&);
    Localitate& operator =(const Localitate&);
    virtual ~Localitate();
    virtual void Afisare();
    int Nr_loc();
    int Venit_m();
};



#endif