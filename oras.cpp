#include "oras.h++"

Oras::Oras() : bonus_venit(0), Localitate() {
}

Oras::Oras(const int bonus_venit, Localitate localitate){
    Localitate::operator=(localitate);
    this->bonus_venit = bonus_venit;
    this->venit_mediu += this->bonus_venit;
}

Oras& Oras::operator=(const Oras& oras) {
    Localitate::operator=(oras);
    this->bonus_venit = oras.bonus_venit;

    return *this;
}

std::ostream& operator<<(std::ostream& out, Oras& oras) {
    out << (Localitate&)oras;
    out << "Bonusul de venit : " << oras.bonus_venit << '\n';

    return out;
}
