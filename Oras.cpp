#include "Oras.hpp"

Oras::Oras() : Localitate(), bonus_venit(0){}

Oras::Oras(const char* nume,const int nr_locuitori,const int venit_mediu,const int bonus_venit) : Localitate(nume,nr_locuitori,bonus_venit)
{
    this->bonus_venit = bonus_venit;
}

Oras::Oras(const Oras& obj) : Localitate(obj)
{
    this->bonus_venit = obj.bonus_venit;
}

Oras& Oras::operator=(const Oras& obj)
{
    Localitate::operator=(obj);
    this->bonus_venit = obj.bonus_venit;

    return *this;
}

ostream& operator<<(ostream& out, const Oras& obj)
{
    out<<(Localitate&)obj;
    out<<"Bonusul venitului este: ";
    out<<obj.bonus_venit<<endl;

    return out;
}

/*void Oras::afisare()
{
    Localitate::afisare();
    cout<<"Bonusul venitului este: ";
    cout<<bonus_venit<<endl;
}*/

int Oras::getVenit()
{
    return Localitate::getVenit() + bonus_venit;
}

int Oras::getLocuitori()
{
    return Localitate::getLocuitori();
}