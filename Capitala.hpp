#ifndef CAPITALA
#define CAPITALA

#include "Oras.hpp"

class Capitala: public Oras{
    char *tara;

public:
    Capitala();
    Capitala(const char*, const int, const int, const int, const char*);
    ~Capitala();
    Capitala& operator= (Capitala& x);
    double Venit();
    double Populatie();
    void afisare();
};

#endif // CAPITALA
