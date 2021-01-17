#include "Oras.hpp"

Oras::Oras():Localitate()
{
	this->bonus_venit = 0;
}

Oras::Oras(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit):Localitate(nume, nr_locuitori, venit_mediu)
{
	this->bonus_venit = bonus_venit;
}

void Oras::afisare()
{
	Localitate::afisare();
	cout << "Bonus venit: " << this->bonus_venit << endl;
}

Oras& Oras::operator=(const Oras& obj)
{
	Localitate::operator=(obj);
	this->bonus_venit = obj.bonus_venit;
	
	return *this;
}

int Oras::getVenit()
{
	return Localitate::getVenit() + bonus_venit;
}

