
#ifndef CAPITALA_H
#define CAPITALA_H

#include "Oras.h"

class Capitala: public Oras{
private:
    char* tara;
public:
    Capitala();
    Capitala(const char*, int, int, int, const char*);
    Capitala& operator = (const Capitala& cap);
    int getVenit();
    int getLocuitori();
    virtual void afisare();
    ~Capitala();
};

#endif