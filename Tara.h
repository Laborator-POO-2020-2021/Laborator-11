
#ifndef TARA_H
#define TARA_H

#include "Localitate.h"

class Tara{
private:
    Localitate** v;

public:
    Tara();
    Tara(Localitate**);
    void afisare();
    int getLocuitori();
    int getVenit();
    ~Tara();
};

#endif