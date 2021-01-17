#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "Oras.hpp"

class Capitala:public Oras
{
    char* tara;

public:
    Capitala();
    Capitala(char*, int, char*, int, int);
    ~Capitala();

    Capitala& operator=(const Capitala &);
    void afisare();
};

#endif // CAPITALA_HPP
