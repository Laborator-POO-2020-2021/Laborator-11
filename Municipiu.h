#ifndef MUNICIPIU_H
#define MUNICIPIU_H

#include "Oras.h"

class Municipiu: public Oras{
private:
    char* regiune;

public:
    Municipiu();
    Municipiu(const char*, int, int, int, const char*);
    Municipiu& operator = (const Municipiu&);
    int getVenit();
    int getLocuitori();
    virtual void afisare();
    ~Municipiu();
};

#endif