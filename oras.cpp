#include "oras.hpp"

Oras::Oras (): Localitate (), bonus_venit (0){}

Oras::Oras (const char *nume, const int nr_locuitori, const int venit_mediu, const int bonus_venit): Localitate (nume,nr_locuitori,venit_mediu)
{
    this->bonus_venit = bonus_venit;
}

Oras& Oras::operator = (Oras &obj)
{
    Localitate::operator=(obj);
    bonus_venit = obj.bonus_venit;

    return *this;
}

ostream& operator << (ostream &out, Oras &obj)
{
    out << (Localitate&)obj;
    out << "Bonusul este: " << obj.bonus_venit << endl;

    return out;
}