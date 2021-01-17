#include "Localitate.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0){}

Localitate::Localitate(const char* nume,int nr_locuitori,int venit_mediu)
{
	this->nume=new char[strlen(nume)+1];
	strcpy(this->nume,nume);
	this->nr_locuitori=nr_locuitori;
	this->venit_mediu=venit_mediu;
}

Localitate::Localitate(const Localitate& obj)
{
	nume=NULL;
	*this=obj;
}

Localitate&Localitate::operator=(const Localitate& obj)
{
	if (nume!=NULL)
	{
		delete []nume;
	}
	nume=new char[strlen(obj.nume)+1];
	strcpy(nume,obj.nume);
	nr_locuitori=obj.nr_locuitori;
	venit_mediu=obj.venit_mediu;
	
	return *this;
}

Localitate::~Localitate()
{
	delete []nume;
}

void Localitate::afisare()
{
	cout<<"Nume=";
	cout<<nume<<"\n";
	cout<<"Nr_locuitori=";
	cout<<nr_locuitori<<"\n";
	cout<<"Venit_mediu=";
	cout<<venit_mediu<<"\n";
}

int Localitate::getLocuitori()
{
	return nr_locuitori;
}

int Localitate::getVenit_Mediu()
{
	return venit_mediu;
}
