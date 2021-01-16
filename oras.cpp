#include "oras.hpp"

Oras::Oras():Localitate(), bonus_venit(0){}

Oras::Oras(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit):Localitate(nume, nr_locuitori, venit_mediu), bonus_venit(bonus_venit){}

Oras::~Oras(){}

Oras::Oras(const Oras& obj){
    (*this) = obj;
}

Oras&  Oras::operator=(const Oras& obj){
    (Localitate&)(*this) = (Localitate&)obj;
    this->bonus_venit = obj.bonus_venit;

    return *this;
}

ostream &operator<<(ostream &out, const Oras & obj){
    out<<(Localitate&)obj;
    out<<"Bonus venit din oras : "<<obj.bonus_venit<<" ||| ";
    return out;
}