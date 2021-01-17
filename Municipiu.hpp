#ifndef MUNICIPIU
#define MUNICIPIU

#include "Oras.hpp"

class Municipiu: public Oras{
    char* regiune;

public:
    Municipiu();
    Municipiu(const char*, const int, const int, const int, const char*);
    ~Municipiu();
    Municipiu& operator= (Municipiu &x);
    double Populatie();
    double Venit();
    void afisare();
};

#endif // MUNICIPIU
