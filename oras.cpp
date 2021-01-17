#include "oras.hpp"


Oras::Oras():bonus_venit(0),Localitate(){}

Oras::Oras(const int bonus_venit,const char *nume,const int nr_locuitori,const int venit_mediu):bonus_venit(bonus_venit),Localitate(nume,nr_locuitori,venit_mediu){}

Oras::Oras(const Oras& obj)
{
	
	*this=obj;
	
}

Oras& Oras::operator=(const Oras& obj)
{
	bonus_venit=obj.bonus_venit;
	Localitate::operator=(obj);
	
	
	return *this;
	
}

int Oras::getVenit()
{
	int s=Localitate::getVenit();
	s=s+bonus_venit;
	
	return s;
}

int Oras::getNr()
{
	int nr=Localitate::getNr();
	return nr;
}

char* Oras::getNume()const
{
	return "";
}


void Oras::afisare()
{
	Localitate::afisare1();
	cout<<".Bonus venit: "<<bonus_venit<<" ";
}

void Oras::afisare1()
{
	Localitate::afisare1();
	cout<<".Bonus venit: "<<bonus_venit<<" ";
}

