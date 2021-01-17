
#ifndef CAPITALA_HPP
#define CAPITALA_HPP
#include "Oras.cpp"

class Capitala: public Oras
{
    char* tara;
public:
    Capitala();
    Capitala(const char*, const char*, int, int, int);
    virtual void afisare();
    ~Capitala();
};
#endif // CAPITALA_HPP
