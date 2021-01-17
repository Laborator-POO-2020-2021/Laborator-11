#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala:virtual public Oras{
    char *tara;
public:
    Capitala();
    Capitala(const char*,int,int,int,const char*);
    Capitala(const Capitala&);
    Capitala& operator=(const Capitala&);
    void afisare();
    ~Capitala();

};

#endif
