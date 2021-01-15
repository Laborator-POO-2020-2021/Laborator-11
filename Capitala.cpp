#include "Capitala.hpp"

Capitala::Capitala()
{
	tara=NULL;
}

Capitala::Capitala(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *tara):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{
	this->tara=new char[strlen(tara)+1];
	strcpy(this->tara,tara);
}

Capitala::Capitala(const Capitala &obj)
{
	*this=obj;
}

Capitala& Capitala::operator=(const Capitala &obj)
{
	this->nr_locuitori=obj.nr_locuitori;
	this->venit_mediu=obj.venit_mediu;
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	this->bonus_venit=obj.bonus_venit;
	this->tara=new char[strlen(obj.tara)+1];
	strcpy(this->tara,obj.tara);
	
	return *this;
}

int Capitala::getNrLoc()
{
	return nr_locuitori;
}

Capitala::afisare()
{
	cout<<"Capitala:"<<endl<<"Nume: "<<nume<<endl<<"Nr locuitori: "<<nr_locuitori<<endl<<"Venit mediu: "<<venit_mediu<<endl<<"Bonus venit: "<<bonus_venit<<endl<<"Tara: "<<tara<<endl;
}

int Capitala::getVenit()
{
	return venit_mediu;
}

Capitala::~Capitala()
{
	delete []nume;
	delete []tara;
}
