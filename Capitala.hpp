#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "Oras.hpp"

//mosteneste Oras
class Capitala: public Oras
{
    char *tara;

public:
    Capitala();
    //ctr. param: la fel ca la municipiu
    Capitala(const char*, int, int, int, const char*);
    ~Capitala();

    void afisare();
};


#endif // CAPITALA_HPP
