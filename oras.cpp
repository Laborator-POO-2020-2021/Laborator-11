#include "oras.hpp"

Oras::Oras():Localitate()
{
    bonus_venit = 0;
}
Oras::Oras(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit):Localitate(nume, nr_locuitori, venit_mediu)
{
    this->bonus_venit = bonus_venit;
}
Oras& Oras::operator=(const Oras& obj)
{
	Localitate::operator=(obj);
    bonus_venit = obj.bonus_venit;
	return *this;
}
int Oras::getBonus()
{
    return Localitate::getVenit_mediu() + bonus_venit;
}
Oras::~Oras()
{

}
void Oras::afisare(ostream &out)
{
    Localitate::afisare(out);
    out<<"Bonus:"<<Oras::getBonus()<<endl;
}

ostream &operator<<(ostream &out, Oras &obj)
{
    obj.afisare(out);
    return out;
}