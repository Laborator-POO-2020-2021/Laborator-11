#include "capitala.hpp"
Capitala::Capitala():Oras(),tara(NULL){}

Capitala::Capitala(const char *t,const char *n,int nr,int v,int b): Oras(n,nr,v,b)
{
	tara=new char[strlen(t)+1];
	strcpy(tara,t);
}

Capitala::~Capitala()
{
	delete []tara;
}

void Capitala::afisare()
{
	cout<<"tara: "<<tara<<" ";
	this->Oras::afisare();

}

