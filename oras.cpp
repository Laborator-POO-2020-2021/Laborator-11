#include "oras.hpp"

Oras::Oras():Localitate(), bonus_venit(0){}

Oras::Oras(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit):Localitate(nume, nr_locuitori, venit_mediu)
{
	this->bonus_venit = bonus_venit;
}

int Oras::getVenit()
{
	return Localitate::getVenit() + this->bonus_venit;
}

void Oras::afisare()
{
	Localitate::afisare();
	cout << "Venitul bonus: " << bonus_venit << endl;
}
