#include "oras.hpp"

Oras::Oras(): Localitate(), bonus_venit(0) {}

Oras::Oras(const char* name, int nrLoc, int venit, int bonus): Localitate(name, nrLoc, venit), bonus_venit(bonus) {}

Oras::~Oras() {}

Oras::Oras(const Oras& obj)
{
    (*this) = obj;
}

Oras& Oras::operator=(const Oras& obj)
{
    (Localitate&)(*this) = (Localitate&)obj;
    this->bonus_venit = obj.bonus_venit;

    return *this;
}

ostream& operator<<(ostream& out, const Oras& obj)
{
    out << (Localitate&)obj;
    out << "Venitul bonus este:" << obj.bonus_venit << endl;
    
    return out;
}

int Oras::getVenitMediu()
{
    return Localitate::getVenitMediu() + bonus_venit;
}



