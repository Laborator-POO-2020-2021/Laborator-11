#include "Capitala.hpp"

Capitala::Capitala():tara(NULL),Oras()
{
}

Capitala::Capitala(const char* tara,int bonus_venit,const char *nume,int nr_loc,int venit_med):
			Oras(bonus_venit,nume,nr_loc,venit_med)
{
	this->tara=new char[strlen(tara) + 1];
	strcpy(this->tara,tara);
}

void Capitala::afisare()
{
	cout<<"Tara: "<<tara<<endl;
	Oras::afisare();
}

Capitala::~Capitala()
{
	delete []tara;
}
