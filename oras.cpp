#include "oras.hpp"

Oras::Oras() : Localitate(), bonus_venit(0) {}

Oras::Oras(const char *nume,const int nr_locuitori,const int venit_mediu,const int bonus_venit) : Localitate(nume, nr_locuitori, venit_mediu)
{
    this->bonus_venit = bonus_venit;
}

Oras& Oras::operator = ( Oras& obj)
{
    Localitate::operator = (obj);
    this -> bonus_venit = obj.bonus_venit;

    return *this;
}

void Oras::afisare()
{
    Localitate::afisare();
    cout << "Venitul bonus : " << bonus_venit << endl;
}

int Oras::getLocuitori()
{
    return Localitate::getLocuitori();
}

int Oras::getVenit()
{
    return (Localitate::getVenit() + bonus_venit);
}

Oras::~Oras(){}
