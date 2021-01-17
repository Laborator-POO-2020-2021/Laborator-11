#include "Capitala.hpp"

Capitala::Capitala():tara(NULL),Oras(){}

Capitala::Capitala(const char*nume,int nr_locuitori,int venit_mediu,int bonus_venit,const char *tara):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{
	this->tara=new char[strlen(tara)+1];
	strcpy(this->tara,tara);
}

Capitala::Capitala(const Capitala& obj)
{
	tara=NULL;
	*this=obj;
}

Capitala&Capitala::operator=(const Capitala& obj)
{
	Localitate::operator=(obj);
	Oras::operator=(obj);
	if (tara!=NULL)
	{
		delete []tara;
	}
	tara=new char[strlen(obj.tara)+1];
	strcpy(tara,obj.tara);
}
Capitala::~Capitala()
{
	delete []tara;
}

void Capitala::afisare()
{
	Oras::afisare();
	cout<<"Tara=";
	cout<<tara<<"\n";
}

