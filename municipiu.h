#ifndef MUNICIPIU_H
#define MUNICIPIU_H


#include "oras.h"


class Municipiu: public Oras
{
        char* regiune;
public:
    Municipiu();
    Municipiu(const char*, int, const char*, int, int);
    Municipiu(const Municipiu&);
    Municipiu& operator =(const Municipiu&);
    ~Municipiu();
    void afisare();
};
#endif