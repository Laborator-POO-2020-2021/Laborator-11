#include "Oras.h"
#include <iostream>

Oras::Oras()
{
	bonus_venit = 0;
}

Oras::Oras(int bonus_venit, char* nume, int nr_locuitori, int venit_mediu):Localitate(nume, nr_locuitori, venit_mediu)
{
	this->bonus_venit = bonus_venit;
}

int Oras::getLocuitori()
{
	return nr_locuitori;
}

void Oras::print()
{
	std::cout << "\nBonus venit:" << bonus_venit << "\nNume oras:" << nume << "\nNumar locuitori:" << nr_locuitori << "\nVenit mediu:" << venit_mediu;
}

int Oras::getVenit()
{
	return venit_mediu + bonus_venit;
}
