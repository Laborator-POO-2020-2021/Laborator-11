#include "oras.hpp"

Oras::Oras(): Localitate(), bonus_venit(0) {}

Oras::Oras(const char* nume, int nr, int v, int bonus): Localitate(nume, nr, v), bonus_venit(bonus) {}

Oras::~Oras() {}

Oras::Oras(const Oras& o)
{
    (*this) = o;
}

Oras& Oras::operator=(const Oras& o)
{
    (Localitate&)(*this) = (Localitate&)o;
    this->bonus_venit = o.bonus_venit;

    return *this;
}

ostream& operator<<(ostream& out, const Oras& o)
{
    out << (Localitate&)o;
    out << "BONUS VENIT: " << o.bonus_venit << endl;
    
    return out;
}

int Oras::getVenitMediu()
{
    return Localitate::getVenitMediu() + bonus_venit;
}


