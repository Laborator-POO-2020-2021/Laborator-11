#ifndef TARA_HPP
#define TARA_HPP
#include "localitate.hpp"
#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

class Tara
{
    Localitate **v;
    int nr_localitati;
//hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
public:
    Tara(int n=0);
    void addLoc(Localitate *);
    void afisare();
    int getLocTot();
    friend void schimba(Tara &a,Tara &b);
    Tara & operator=(const Tara &);
    Tara(const Tara&);
    double getBani();
    ~Tara();
};

#endif // TARA_HPP
