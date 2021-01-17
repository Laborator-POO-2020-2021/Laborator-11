#include "Municipiu.hpp"

Municipiu::Municipiu(): Oras()
{
    regiune = NULL;
}

Municipiu::Municipiu(const char *n, int nr, int vm, int bv, const char *r): Oras(n, nr, vm, bv)
{
    regiune = new char[strlen(r) + 1];
    strcpy(regiune, r);
}

Municipiu::~Municipiu()
{
    delete []regiune;
}

void Municipiu::afisare()
{
    Oras::afisare();
     cout<<"Region:\t"<<regiune<<endl;
}







