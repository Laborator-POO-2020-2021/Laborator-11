
#ifndef ORAS_H
#define ORAS_H

#include "Localitate.h"

class Oras: public Localitate{
private:
    int bonus_venit;
public:
    Oras();
    Oras(const char*, int, int, int);//venitul unui oras este bonus_venit+venitul localitatii
    Oras& operator = (const Oras&);
    int getLocuitori();
    int getVenit();
    virtual void afisare();
    ~Oras();
};

#endif