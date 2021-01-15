#include "Localitate.hpp"

Localitate::Localitate()
{
	nume=NULL;
	nr_locuitori=0;
	venit_mediu=0;
}

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu)
{
	this->nr_locuitori=nr_locuitori;
	this->venit_mediu=venit_mediu;
	this->nume=new char[strlen(nume)+1];
	strcpy(this->nume,nume);
}

Localitate::Localitate(const Localitate &obj)
{
	*this=obj;
}

Localitate& Localitate::operator=(const Localitate &obj)
{
	this->nr_locuitori=obj.nr_locuitori;
	this->venit_mediu=obj.venit_mediu;
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	
	return *this;
}

int Localitate::getNrLoc()
{
	return nr_locuitori;
}

Localitate::afisare()
{
	cout<<"Localitate:"<<endl<<"Nume: "<<nume<<endl<<"Nr locuitori: "<<nr_locuitori<<endl<<"Venit mediu: "<<venit_mediu<<endl;
}

int Localitate::getVenit()
{
	return venit_mediu;
}

Localitate::~Localitate()
{
	delete []nume;
}
