#include "oras.hpp"

Oras::Oras() : Localitate(), bonus_venit(0){}

Oras::Oras(int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu) : Localitate(nume, nr_locuitori, venit_mediu), bonus_venit(bonus_venit){}

void Oras::afisare()
{
    Localitate::afisare();

}

