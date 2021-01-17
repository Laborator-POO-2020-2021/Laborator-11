#include "Oras.hpp"

Oras::Oras():Localitate()
{
	bonus_venit = 0;
}

Oras::Oras(int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu):Localitate(nume, nr_locuitori, venit_mediu)
{
	this->bonus_venit = bonus_venit;
}

Oras& Oras::operator=(const Oras &obj)
{
	this->bonus_venit = obj.bonus_venit;
	Localitate::operator=(obj);
	return *this;
}

int Oras::getTotVenit()
{
	return getVenit()+bonus_venit;
}

void Oras::afisare()
{   
	Localitate::afisare();
	cout << "Bonus venit: " << bonus_venit << endl;
}
