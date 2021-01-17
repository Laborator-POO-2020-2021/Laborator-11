#include "Localitate.hpp"

Localitate::Localitate(): nume(NULL), nr_locuitori(0), venit_mediu(0)
{

}

Localitate::Localitate(char *nume, int loc, int venit):nr_locuitori(loc), venit_mediu(venit)
{
	this->nume = new char[strlen(nume)+1];
	strcpy(this->nume, nume);
}

Localitate::~Localitate()
{
	delete []nume;
}

Localitate &Localitate::operator=(const Localitate& obj)
{
	this->nume = new char[strlen(obj.nume)+1];
	strcpy(this->nume, obj.nume);
	this->venit_mediu = obj.venit_mediu;
	this->nr_locuitori = obj.nr_locuitori;

	return *this;
}

int Localitate::getLoc()
{
	return this->nr_locuitori;
}

char* Localitate::getNume()
{
	return this->nume;
}

int Localitate::getVenit()
{
	return this->venit_mediu;
}




