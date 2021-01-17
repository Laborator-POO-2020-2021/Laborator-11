#include "Oras.hpp"

Oras::Oras():bonus_venit(0){}

Oras::Oras(const char* nume,int nr_locuitori,int venit_mediu,int bonus_venit):Localitate(nume,nr_locuitori,venit_mediu)
{
	this->bonus_venit=bonus_venit;
}

Oras::Oras(const Oras& obj)
{
	Localitate::nume=NULL;
	*this=obj;
}

Oras&Oras::operator=(const Oras& obj)
{
	Localitate::operator=(obj);
	bonus_venit=obj.bonus_venit;
	
	return *this;
}

void Oras::afisare()
{
	Localitate::afisare();
	cout<<"Bonus venit=";
	cout<<bonus_venit<<"\n";
}

int Oras::getBonus()
{
	return Localitate::getVenit_Mediu()+bonus_venit;
}
