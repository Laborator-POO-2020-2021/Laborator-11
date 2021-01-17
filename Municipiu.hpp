#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "Oras.hpp"

class Municipiu:public Oras
{
    char* regiune;

public:
    Municipiu();
    Municipiu(char*, int, char*, int, int);
    ~Municipiu();

    Municipiu& operator=(const Municipiu &);
    void afisare();
};

#endif // MUNICIPIU_HPP
