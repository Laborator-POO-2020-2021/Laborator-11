#include "Oras.hpp"

Oras::Oras():Localitate(),bonus_venit(0) {}

Oras::Oras(char *nume, int nrLocuitori, int venitMediu, int bonusVenit) : Localitate(nume, nrLocuitori, venitMediu),bonus_venit(bonusVenit) {}

Oras& Oras::operator=(Oras &obj)
{
    Localitate::operator=(obj);
    this->bonus_venit=obj.bonus_venit;

    return *this;
}

void Oras::afisare() {
    Localitate::afisare();
    cout<<"Bonus venit: "<<this->bonus_venit<<endl;
}

