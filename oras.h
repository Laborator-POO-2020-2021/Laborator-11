
#ifndef ORAS_H
#define ORAS_H

#include "localitate.h"

class Oras : public Localitate
{
protected:
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
public:
    Oras();
    Oras(int,const char*,int,int);
    Oras(const Oras&);
    Oras& operator =(const Oras&);
    ~Oras();
    void afisare();

};


#endif