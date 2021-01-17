#include "localitate.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0){}

Localitate::Localitate(const char *nume, int nr, int venit):nr_locuitori(nr),venit_mediu(venit)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume, nume);
}

Localitate::~Localitate()
{
	delete []nume;
}

void Localitate::afisare()
{
	cout << "Nume: " << nume << endl << "Numar locuitor: " << nr_locuitori << endl << "Venit mediu:" << venit_mediu << endl;
}

int Localitate::getLocuitori()
{
	return nr_locuitori;
}

int Localitate::getVenit()
{
	return venit_mediu;
}
