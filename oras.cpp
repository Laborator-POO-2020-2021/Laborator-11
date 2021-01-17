#include "oras.hpp"

Oras:: Oras() : Localitate()
{
	bonus_venit = 0;
}

Oras:: Oras(int venit_m,int bonus_venit,int nrloc,const char* Nume) : Localitate(Nume,nrloc,venit_m)
{
	this->bonus_venit = bonus_venit;
}

int Oras::getBonus()
{
	return bonus_venit;
}

int Oras::getVenit()
{
	return venit_mediu + bonus_venit;
}

void Oras::afisare()
{
	Localitate::afisare();
	cout<<"Bonus venit: "<<bonus_venit<<endl;
}
