#include "Municipiu.hpp"

Municipiu::Municipiu()
{
	regiune=NULL;
}

Municipiu::Municipiu(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *regiune):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{
	this->regiune=new char[strlen(regiune)+1];
	strcpy(this->regiune,regiune);
}

Municipiu::Municipiu(const Municipiu &obj)
{
	*this=obj;
}

Municipiu& Municipiu::operator=(const Municipiu &obj)
{
	this->nr_locuitori=obj.nr_locuitori;
	this->venit_mediu=obj.venit_mediu;
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	this->bonus_venit=obj.bonus_venit;
	this->regiune=new char[strlen(obj.regiune)+1];
	strcpy(this->regiune,obj.regiune);
	
	return *this;
}

int Municipiu::getNrLoc()
{
	return nr_locuitori;
}

Municipiu::afisare()
{
	cout<<"Municipiu:"<<endl<<"Nume: "<<nume<<endl<<"Nr locuitori: "<<nr_locuitori<<endl<<"Venit mediu: "<<venit_mediu<<endl<<"Bonus venit: "<<bonus_venit<<endl<<"Regiune: "<<regiune<<endl;
}

int Municipiu::getVenit()
{
	return venit_mediu;
}

Municipiu::~Municipiu()
{
	delete []nume;
	delete []regiune;
}
