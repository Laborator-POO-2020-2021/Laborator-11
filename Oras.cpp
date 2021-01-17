#include "Oras.hpp"

Oras::Oras() : Localitate(), bonus_venit(0) {}

Oras::Oras(const char *nume, int nr_loc, int v_mediu, int bonus_v) : Localitate(nume, nr_loc, v_mediu), bonus_venit(bonus_v) {}

Oras::Oras(const Oras &obj)
{
    *this = obj;
}
Oras &Oras::operator=(const Oras &obj)
{
	Localitate::operator=(obj);
	this->bonus_venit = obj.bonus_venit;
	return *this;
}
void Oras::afisare()
{
	Localitate::afisare();
	cout << "Bonus venit = " << bonus_venit << endl;
}
int Oras::getVenit()
{
	return Localitate::getVenit() + bonus_venit;
}