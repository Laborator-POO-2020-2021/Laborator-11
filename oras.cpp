#include "oras.hpp"

Oras::Oras():Localitate(),bonus_venit(0){}

Oras::Oras(const char *n,int nr,int v,int b):Localitate(n,nr,v),bonus_venit(b){}

void Oras::afisare()
{
	this->Localitate::afisare();
	cout<<"bonus venit: "<<bonus_venit<<" ";
}

int Oras::bonus()
{
	return bonus_venit;
}
