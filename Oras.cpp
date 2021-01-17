
#include "Oras.hpp"
#include "Localitate.cpp"

Oras::Oras():Localitate()
{
    this->bonus_venit=0;
}

Oras::Oras(const char* nume, int nr, int venit, int bonus): Localitate(nume, nr, venit), bonus_venit(bonus)
{
}

void Oras:: afisare()
{
    Localitate:: afisare();
    cout<<"Bonus venit: "<<this->bonus_venit<<endl;
}

Oras:: ~Oras()
{
}
