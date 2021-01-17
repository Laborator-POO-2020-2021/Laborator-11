#include "oras.hpp"

Oras::Oras() : Localitate(), bonus_venit(0) {}

Oras::Oras(const char *nume, const int locuitori, const int venit, const int bonus) : Localitate(nume, locuitori, venit), bonus_venit(bonus) {}

Oras& Oras::operator=(const Oras &obj)
{
    this->bonus_venit = obj.bonus_venit;
    if (this->nume != NULL)
        delete[] this->nume;
    this->nume = obj.nume;
    strcpy(this->nume, obj.nume);
    this->venit_mediu = obj.venit_mediu;
    this->nr_locuitori = obj.nr_locuitori;
    return *this;
}

Oras::~Oras() {}

int Oras::get_venit()
{
    return this->venit_mediu + this->bonus_venit;
}

int Oras::get_populatie()
{
    return this->nr_locuitori;
}

void Oras::print()
{
    Localitate::print();
    cout << "BONUS VENIT: " << this->bonus_venit << endl;
}