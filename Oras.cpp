#include "Oras.hpp"

Oras::Oras()
{
	bonus_venit=0;
}

Oras::Oras(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit):Localitate(nume,nr_locuitori,venit_mediu)
{
	this->bonus_venit=bonus_venit;
}

Oras::Oras(const Oras &obj)
{
	*this=obj;
}

Oras& Oras::operator=(const Oras &obj)
{
	this->nr_locuitori=obj.nr_locuitori;
	this->venit_mediu=obj.venit_mediu;
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	this->bonus_venit=obj.bonus_venit;
	
	return *this;
}

int Oras::getNrLoc()
{
	return nr_locuitori;
}

Oras::afisare()
{
	cout<<"Oras:"<<endl<<"Nume: "<<nume<<endl<<"Nr locuitori: "<<nr_locuitori<<endl<<"Venit mediu: "<<venit_mediu<<endl<<"Bonus venit: "<<bonus_venit<<endl;
}

int Oras::getVenit()
{
	return venit_mediu;
}

Oras::~Oras()
{
	delete []nume;
}
