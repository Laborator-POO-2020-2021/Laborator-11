#include "capitala.hpp"

Capitala:: Capitala()
{
	tara = NULL;
}

Capitala::Capitala(const char* tara,int venit_m,int bonus_v,int nrloc,const char* Nume): Oras(venit_m, bonus_v,nrloc,Nume)
{
	this->tara = new char[strlen(tara) + 1];
	strcpy(this->tara,tara);
}
void Capitala::afisare()
{
	Oras::afisare();
	cout<<"Tara: "<<tara<<endl;
}

Capitala::~Capitala()
{
	delete[] tara;
}
