#include "Oras.hpp"

Oras::Oras():bonus_venit(0),Localitate()
{
}

Oras::Oras(int bonus_venit,const char *nume,int nr_loc,int venit_med):bonus_venit(bonus_venit),
			Localitate(nume,nr_loc,venit_med)
{
}

int Oras::getVenitMediu()
{
	int venitLocalitate=Localitate::getVenitMediu();
	
	return  venitLocalitate + bonus_venit;
}
	
void Oras::afisare()
{
	cout<<"Bonus Venit: "<<bonus_venit<<endl;
	Localitate::afisare();
}
