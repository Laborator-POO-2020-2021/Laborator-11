#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala : public Oras{
    char *tara;
public:
    Capitala();
    Capitala(const char*,const int,const int,const int, const char*);
    Capitala& operator = (Capitala& obj);

    void afisare();
    int getLocuitori();
    int getVenit();

    ~Capitala();
};

#endif
