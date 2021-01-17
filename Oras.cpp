#include "Oras.hpp"

Oras::Oras(): Localitate(), bonus_venit(NULL){}

Oras::Oras(char *nume, int nr_locuitori, int venit_mediu, int bonus_venit): Localitate(nume, nr_locuitori, venit_mediu), bonus_venit(bonus_venit){};

void Oras::afisare()
{
	((Localitate&)(*this)).afisare();
	cout << "Bonus venit: " << bonus_venit << endl;
}

bool Oras::isOras()
{
	return 1;
}

int Oras::venit_total()
{
	return ((Localitate&)(*this)).venit_total() + bonus_venit;
}

int Oras::locuitori()
{
	return ((Localitate&)(*this)).locuitori();
}
