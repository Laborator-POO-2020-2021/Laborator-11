
#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala:public Oras
{
    char * tara;

public:
    Capitala();
    Capitala(const char * nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *);
    void afisare();
    ~Capitala();
};

 #endif // CAPITALA_HPP
