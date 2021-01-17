#include "localitate.hpp"


Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0){}

Localitate::Localitate(const char *nume,const int nr_locuitori,const int venit_mediu):nr_locuitori(nr_locuitori),venit_mediu(venit_mediu)
{
	
	this->nume=new char[strlen(nume)+1];
	strcpy(this->nume,nume);
	
}

Localitate::Localitate(const Localitate& obj)
{
	
	nume=NULL;
	*this=obj;
	
}

Localitate& Localitate::operator=(const Localitate& obj)
{
	
	if(nume!=NULL)
	 delete []nume;
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	nr_locuitori=obj.nr_locuitori;
	venit_mediu=obj.venit_mediu;
	
	return *this;
	
}

int Localitate::getVenit()
{
	return venit_mediu;
}

int Localitate::getNr()
{
	return nr_locuitori;
}

char* Localitate::getNume()const
{
	
	return "";
}


void Localitate::afisare()
{
	cout<<"Nume localitate: "<<nume<<" "<<".Nr. locuitori: "<<nr_locuitori<<" "<<".Venit mediu: "<<venit_mediu<<" ";
}

void Localitate::afisare1()
{
	cout<<"Nume localitate: "<<nume<<" "<<".Nr. locuitori: "<<nr_locuitori<<" "<<".Venit mediu: "<<venit_mediu<<" ";
}


Localitate::~Localitate()
{
	delete []nume;
}

