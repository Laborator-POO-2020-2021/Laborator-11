#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala:public Oras
{
    char *tara;
public:
    Capitala();
    Capitala(const char*, int, int, int,const char*);
    char* gettara();
    void settara(const char*);
    void afisare();
    ~Capitala();
};

#endif // CAPITALA_HPP
