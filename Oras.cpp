// Implementare metode pentru clasa Oras - clasa derivata

#include<iostream>
#include<string.h>
#include"Oras.hpp"
using namespace std;

Oras:: Oras() : Localitate()
{
	bonus_venit = 0;
}

Oras:: Oras(int venit,int bonus_ven,int nr_loc,char* name) : Localitate(name,nr_loc,venit)
{
	bonus_venit = bonus_ven;
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

