#include "Localitate.hpp"

Localitate::Localitate() : nume(NULL), nr_locuitori(0), venit_mediu(0) {}

Localitate::Localitate(const char *nume, int nr_loc, int venit_m) : nr_locuitori(nr_loc), venit_mediu(venit_m)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume, nume);
}
Localitate::Localitate(const Localitate &obj)
{
	nume = NULL;
	*this = obj;
}
Localitate &Localitate::operator=(const Localitate &obj)
{
	if (nume != NULL)
		delete[] nume;
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume, obj.nume);
	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;
	
	return *this;
}
void Localitate::afisare()
{
	cout << "\nNume localitate = ";
	if (nume != NULL)
		cout << nume << endl;
	cout << "Nr. locuitori = " << nr_locuitori << endl;
	cout << "Venit mediu = " << venit_mediu << endl ;
}
int Localitate::getVenit()
{
	return venit_mediu;
}
int Localitate::getNrLocuitori()
{
	return nr_locuitori;
}
Localitate::~Localitate()
{
	if (nume != NULL)
		delete[] nume;
}