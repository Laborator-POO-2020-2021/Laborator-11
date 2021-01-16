#ifndef TARA
#define TARA
#include "Localitate.hpp"

class Tara
{
    Localitate *v;

public:
    Tara();
    Tara(Localitate*);
    void afisare();
    void sortare_nrloc();
    void sortare_venit();
};

#endif

