
#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"

class Tara
{
    Localitate ** v;

public:
    Tara();
    Tara(Localitate **);
    void afisare();
    int getNrLocTara();
    int getVenitMediu();
    ~Tara();

};

#endif // TARA_HPP
