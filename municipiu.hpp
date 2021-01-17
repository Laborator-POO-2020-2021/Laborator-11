#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "oras.hpp"

class Municipiu : public Oras{
    char *regiune;
public:
    Municipiu();
    Municipiu(const char*,const int,const int,const int, const char*);
    Municipiu& operator = (Municipiu& obj);

    void afisare();
    int getLocuitori();
    int getVenit();

    ~Municipiu();
};

#endif
