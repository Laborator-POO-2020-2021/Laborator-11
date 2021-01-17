#include "oras.hpp"

Oras::Oras():Localitate(), bonus_venit(0) {}

Oras::Oras(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit):
Localitate(nume, nr_locuitori, venit_mediu)
{
	this -> bonus_venit = bonus_venit ;
}

void Oras::afisare()
{	
	Localitate::afisare();
	cout << "Date oras:" << endl;
	cout << "Bonus:" << bonus_venit << endl;
	cout << endl;	
}

int Oras::getLocuitori()
{
	return (this -> nr_locuitori);
}

int Oras::getVenit()
{
	return (this -> venit_mediu + this -> bonus_venit);
}

