#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "Oras.hpp"

class Municipiu: public Oras
{
    char *regiune;

public:
    Municipiu();
    Municipiu(const char*, int, int, int, const char*);
    ~Municipiu();

    void afisare();
    //int getNrLocuitori();
    //int getVenit();
};

#endif
