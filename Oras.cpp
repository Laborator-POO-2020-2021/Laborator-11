#include "Oras.hpp"

Oras::Oras():Localitate(),bonus_venit(0)
{

}

Oras::Oras(int bonus_venit, char* nume, int nr_locuitori, int venit_mediu):Localitate(nume, nr_locuitori, venit_mediu)
{
    this->bonus_venit = bonus_venit;
}

Oras::~Oras()
{

}

void Oras::afisare()
{
    cout << "BONUS VENIT: " << bonus_venit << endl;
    Localitate::afisare();
}

Oras& Oras:: operator=(const Oras &x)
{
    this->bonus_venit = x.bonus_venit;

    (Localitate&) *this = (Localitate&) x;

    return *this;
}

int Oras::getVenit()
{
    return bonus_venit + (*this).Localitate::getVenit();
}
