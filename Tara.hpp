
#ifndef TARA_HPP
#define TARA_HPP
#include "Localitate.hpp"

class Tara
{
    Localitate** v;

public:
    Tara();
    Tara(Localitate**);
    void afisare();
    int getVenitMediu();
    int getNrLocuitori();
    ~Tara();
};
#endif // TARA_HPP
