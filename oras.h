#ifndef ORAS_H
#define ORAS_H

#include "localitate.h"

class Oras : public Localitate
{
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
public:
    Oras();
    int getWage();
    Oras(const char*, int, int, int);
    void afisare();

};


#endif // ORAS_H
