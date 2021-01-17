#include "oras.hpp"
Oras::Oras() : Localitate(), bonus_venit(0) {}

Oras::Oras(int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu) : Localitate(nume,nr_locuitori,venit_mediu), bonus_venit(bonus_venit)
{
}

void Oras::afisare()
{

    cout << " Bonus venit: " << getBonus_venit();
    cout << "; nume: " << getNume();
    cout << "; nr_locuitori: ";
    cout << getNr_locuitori();
    cout << "; Venit mediu: ";
    cout << getVenit_mediu();
    cout << "}\n";
}


int Oras::getBonus_venit()
{
    return bonus_venit + getVenit_mediu();
}
