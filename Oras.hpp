#ifndef ORAS
#define ORAS

#include "Localitate.hpp"

class Oras: public Localitate{
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.

public:
    Oras();
    Oras(const char*, const int, const int, const int);
    ~Oras();
    Oras& operator= (Oras &x);
    double Populatie();
    double Venit();
    void afisare();
};

#endif // ORAS
