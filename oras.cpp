#include "oras.hpp"

Oras::Oras():Localitate()
{
	bonus_venit = 0;
}

Oras::Oras(const char*nume, int nr_locuitori,int venit_mediu,int bonus_venit):Localitate(nume,nr_locuitori,venit_mediu)
{
	this-> bonus_venit = bonus_venit;
}

void Oras::afisare()
{
	Localitate::afisare();
	cout<<"venit_bonus: "<<bonus_venit<<endl;
}

int Oras::getVenit()
{
	int s;
	s = Localitate::venit_mediu + bonus_venit;
	cout<<"venit total: "<<s<<endl;
}
