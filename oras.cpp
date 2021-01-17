#include "oras.hpp"

Oras::Oras():Localitate(),bonus_venit(0){}

Oras::Oras(const char *nume, int nr, int venit, int bonus):Localitate(nume,nr,venit), bonus_venit(bonus){}

void Oras::afisare()
{
	this->Localitate::afisare();
	cout << "Bonus venit: " << bonus_venit << endl;
}

int Oras::getBonus()
{
	return bonus_venit;
}
