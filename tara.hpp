#ifndef TARA_HPP
#define TARA_HPP
#include "util.hpp"
#include "localitate.hpp"

class Tara
{
    Localitate **v; // hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
public:
    Tara();
    ~Tara();
    Tara(Localitate **);
    int getNumarLocuitori();
    int getVenit();
    void afisare();
};
#endif