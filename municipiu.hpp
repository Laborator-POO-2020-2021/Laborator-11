#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "oras.hpp"

class Municipiu:virtual public Oras{
    char * regiune;
public:
    Municipiu();
    Municipiu(const char*,int,int,int,const char*);
    Municipiu(const Municipiu&);
    Municipiu& operator=(const Municipiu&);
    void afisare();
    ~Municipiu();
};

#endif
