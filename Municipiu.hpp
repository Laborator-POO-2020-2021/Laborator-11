#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "Oras.hpp"

class Municipiu: public Oras {
    char *regiune;
public:
    Municipiu();
    Municipiu(char*, int, int, int, char*);

    // int getVenitMediu();
    void afisare();

    ~Municipiu();
};

#endif