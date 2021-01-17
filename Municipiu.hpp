
#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "Oras.hpp"

class Municipiu: public Oras
{
    char* regiune;
public:
    Municipiu();
    Municipiu(const char*, const char*, int, int, int);
    virtual void afisare();
    ~Municipiu();
};
#endif // MUNICIPIU_HPP
