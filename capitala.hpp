#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala: public Oras{
    char *tara;
public:
    Capitala();
    Capitala(const char*, int, const char*, int, int);
    Capitala(const Capitala&);
    Capitala& operator=(const Capitala&);
    ~Capitala();
    void Afisare();
    int Nr_loc();
    int Venit_m();
};

#endif