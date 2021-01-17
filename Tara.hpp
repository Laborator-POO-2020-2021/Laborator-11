#ifndef TARA_HPP
#define TARA_HPP


//clasa tara are nevoie de localitati
#include "Localitate.hpp"

class Tara
{
    Localitate **v;

public:
    Tara();
    Tara(Localitate **);
    ~Tara();

    //metode:
    int getPopulatie();
    float getVM(); //venit mediu - pt. pct. 4

    void afisare();
};


#endif // TARA_HPP
