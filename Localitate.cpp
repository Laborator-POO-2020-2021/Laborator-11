#include "Localitate.hpp"

Localitate::Localitate()
{
	nume = NULL;
	nr_locuitori = 0;
	venit_mediu = 0;
}

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu)
{
	this->nume = new char[strlen(nume)+1];
	strcpy(this->nume,nume);
	this->nr_locuitori = nr_locuitori;
	this->venit_mediu = venit_mediu;
}

Localitate& Localitate::operator=(const Localitate &obj)
{
	if(nume != NULL)
		delete []nume;
	this->nume = new char[strlen(obj.nume)+1];
	strcpy(this->nume, obj.nume);
	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;
	return *this;
}

Localitate::~Localitate()
{
	delete []nume;
}

int Localitate::getLoc()
{
	return nr_locuitori;
}

int Localitate::getVenit()
{
	return venit_mediu;
}

void Localitate::afisare()
{
	cout << endl << endl;
	cout << "Nume: " << nume << endl;
	cout << "Nr de locuitori: " << nr_locuitori << endl;
	cout << "Venitul mediu: " << venit_mediu << endl;
}
