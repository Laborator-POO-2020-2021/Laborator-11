#include "Localitate.hpp"

Localitate::Localitate():nume(NULL), nr_locuitori(0), venit_mediu(0){}

Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu):nr_locuitori(nr_locuitori),
venit_mediu(venit_mediu){
	this->nume = new char [strlen(nume)+1];
	strcpy (this->nume, nume);
}
Localitate::Localitate(const Localitate& obj)
{
	nume = NULL;
	*this = obj;
}
Localitate& Localitate::operator=(const Localitate& obj)
{
	if (nume != NULL)
	    delete[] nume;
	this->nume = new char [strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;
	return *this;
}

void Localitate::afisare()
{
	cout << "Nume: " << nume << ". Nr de locuitori: " << nr_locuitori << ". Venitul mediu: " << venit_mediu; 
	cout << endl;
}

int Localitate::getLoc()
{ 
    return this->nr_locuitori;
}

int Localitate::getVenit()
{
	return this->venit_mediu;
} 

Localitate::~Localitate()
{
	delete[] nume;
}
