#include "oras.hpp"

Oras::Oras() : Localitate()
{
    bonus_venit = 0;
}

Oras::Oras(const char *nume, int locuitori, int venit, int bonus_venit) : Localitate(nume, locuitori, venit)
{
    this->bonus_venit = bonus_venit;
}

Oras::Oras(const Oras &obj) : Localitate(obj)
{
    bonus_venit = obj.bonus_venit;
}

Oras &Oras::operator=(const Oras &obj)
{
    Localitate::operator=(obj);

    bonus_venit = obj.bonus_venit;
    return *this;
}

void Oras::print(ostream &out)
{
    Localitate::print(out);
    out << ", " << bonus_venit<<" extra";
}

ostream &operator<<(ostream &out, Oras &obj)
{
    obj.print(out);
    return out;
}

int Oras::getVenit_mediu() const
{
    return venit_mediu + bonus_venit;
}