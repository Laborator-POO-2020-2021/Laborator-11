#ifndef CAPITALA_H
#define CAPITALA_H

#include "oras.h"

class Capitala : public Oras
{
    char *tara;
public:
    Capitala();
    Capitala(const char*, int, int, int, const char*);
    char *getTara();
    void afisare();
    ~Capitala();
};

#endif // CAPITALA_H
