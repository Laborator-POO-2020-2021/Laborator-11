#ifndef TARA_H
#define TARA_H

#include "capitala.h"
#include <typeinfo>

class Tara
{
    Localitate **v;
public:
    Tara();
    Tara(Localitate **v);
    int getAverageWage();
    int getLocuitori();
    char* getName();
    void afisare();
    ~Tara();
};

#endif // TARA_H
