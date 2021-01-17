#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "Oras.hpp"

class Capitala: public Oras {
    char *tara;
public:
    Capitala();
    Capitala(char*, int, int, int, char*);

    // int getVenitMediu();
    void afisare();

    ~Capitala();
};

#endif