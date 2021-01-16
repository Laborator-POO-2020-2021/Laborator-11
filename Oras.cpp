#include "Oras.hpp"

Oras::Oras():Capitala(),Municipiu(),bonus_venit(0)
{}


Oras::Oras(char *tara, char *regiune, int bonus_venit) : Capitala(tara), Municipiu(regiune), bonus_venit(bonus_venit)
{}

void Oras::afisare()
{
    Capitala::afisare();
    Municipiu::afisare();
    cout << "bonus venit: " << bonus_venit<< endl;
}

