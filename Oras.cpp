#include "Oras.hpp"

Oras::Oras():Localitate(),bonus_venit(0)
{}

Oras::Oras (const char* nume, int locuitori, int venit_mediu, int bonus_venit):
    Localitate(nume, locuitori, venit_mediu),bonus_venit(bonus_venit)
{}


Oras::Oras(const Oras& obj)
{
    //daca apar erori poate sa fie de aici, din cauza ca numele poate sa fie ceva diferit de null si sa se futa in operator= la conditia delete
    (Localitate&) *this = (Localitate& )obj;
    this ->bonus_venit = obj.bonus_venit;
}


Oras::~Oras()
{}

Oras& Oras::operator= (const Oras& obj )
{
    (Localitate&) *this = (Localitate& )obj;
    this ->bonus_venit = obj.bonus_venit;
    return *this;
}

void Oras::afisare()
{
    (*this).Localitate::afisare();
    cout<<" "<<bonus_venit;
}

int Oras::getVenit()
{
    return bonus_venit + (*this).Localitate::getVenit();
}
