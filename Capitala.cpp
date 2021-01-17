#include "Capitala.hpp"


Capitala::Capitala():Oras()
{
    tara = NULL;
}

Capitala::Capitala(const char *n, int nr, int vm, int bv, const char *tz): Oras(n, nr, vm, bv)
{
    tara = new char[strlen(tz) + 1];
    strcpy(tara, tz);
}

Capitala::~Capitala()
{
    delete []tara;
}

void Capitala::afisare()
{
    Oras::afisare();
     cout<<"Tara:\t"<<tara<<endl;
}
