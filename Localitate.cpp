#include "Localitate.hpp"

Localitate::Localitate()
{
	this->nume = NULL;
	this->nr_locuitori = 0;
	this->venit_mediu = 0;
}

Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	this->nr_locuitori = nr_locuitori;
	this->venit_mediu = venit_mediu;
	
}

Localitate::~Localitate()
{
	delete []nume;
}

int Localitate::getNrLocuitori()
{
	return this->nr_locuitori;
}

int Localitate::getVenit()
{
	return this->venit_mediu;
}

void Localitate::afisare()
{
	cout << "Nume: " << this->nume << endl;
	cout << "Nr. locuitori: " << this->nr_locuitori << endl;
	cout << "Venit mediu: " << this->venit_mediu << endl;
}

Localitate& Localitate::operator=(const Localitate& obj)
{
	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;
	if (this->nume != NULL)
		delete []this->nume;
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume,obj.nume);
	
	return *this;
}


