#include "oras.h"

Oras :: Oras() : Localitate() {}

Oras :: Oras(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit) :
    Localitate(nume, nr_locuitori, venit_mediu), bonus_venit(bonus_venit) {}

int Oras :: getWage()
{
    return ((Localitate*)this)->getVenitMediu() + bonus_venit;
}

void Oras :: afisare()
{
    this->Localitate :: afisare();
    cout << endl << bonus_venit;
}


