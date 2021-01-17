#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara
{
    Localitate **v; //pentru a parcurge vectorul puneti pe ultima pozitie NULL
                    //parcurgeti vectorul pana dati de NULL.
public:
    Tara();
    Tara(Localitate **);
    Tara(const Tara &);
    Tara &operator=(const Tara &);
    void afisare();
    float getVenit();
    int getNrLocuitori();
    ~Tara();
};
#endif