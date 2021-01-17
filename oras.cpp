#include "oras.hpp"

Oras::Oras(): Localitate()
{
    bonus_venit = 0;
}

Oras::Oras(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit): Localitate(nume, nr_locuitori, venit_mediu)
{
    this->bonus_venit = bonus_venit;
}

Oras::Oras(const Oras &obj)
{
    this->bonus_venit = obj.bonus_venit;
}

Oras& Oras::operator=(const Oras &obj)
{
    Localitate::operator=(obj);

    this->bonus_venit = obj.bonus_venit;

    return *this;
}

int Oras::Get_venit()
{
    return (this->venit_mediu + this->bonus_venit);
}

int Oras::Get_nr_locuitori()
{
    return this->nr_locuitori;
}

void Oras::afisare()
{
    Localitate::afisare();
    cout << "Venit bonus: " << this->bonus_venit << endl;
}

Oras::~Oras()
{}
