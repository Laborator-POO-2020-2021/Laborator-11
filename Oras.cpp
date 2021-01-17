#include "Oras.hpp"

Oras::Oras(): Localitate()
{
    bonus_venit = 0;
}

Oras::Oras(const char* nume, const int nr_locuitori, const int venit_mediu, const int bonus_venit): Localitate(nume, nr_locuitori, venit_mediu)
{
    this -> bonus_venit = bonus_venit;
}

Oras::~Oras()
{

}

Oras& Oras::operator= (Oras &x)
{
    Localitate::operator=(x);

    bonus_venit = x.bonus_venit;

    return *this;
}

double Oras::Populatie()
{
    return Localitate::Populatie();
}

double Oras::Venit()
{
    return Localitate::Venit() + bonus_venit;   //venitul unui oras este venitul localitatii + bonus_venit.
}

void Oras::afisare()
{
    Localitate::afisare();

    cout<<"Bonusul este: "<<bonus_venit<<'\n'<<'\n';
}
