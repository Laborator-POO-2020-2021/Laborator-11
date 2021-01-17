#include "oras.hpp"

Oras::Oras():bonus_venit(0),Localitate()
{

}

Oras::Oras(const char *nume, const int nr_locuitori, const int venit_mediu, const int bonus_venit):Localitate(nume, nr_locuitori,venit_mediu), bonus_venit(bonus_venit)
{

}
Oras::Oras(const Oras &obj):Localitate(obj)
{

    this->bonus_venit = obj.bonus_venit;

}

Oras &Oras::operator=(const Oras &obj)
{

    Localitate::operator=(obj);

    bonus_venit = obj.bonus_venit;

    return *this;

}

void Oras::afisare(ostream &out)
{

    Localitate::afisare(out);

    out << " Bonus Venit: " << bonus_venit;

}

ostream &operator<<(ostream &out, Oras &obj)
{
    obj.afisare(out);
    return out;
}

int Oras::getVenit_mediu()
{

    return bonus_venit + Localitate::getVenit_mediu();
    
}