#include "Localitate.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0) 
{}

Localitate::Localitate(const char *nume,int nr_loc,int venit_med):nr_locuitori(nr_loc),venit_mediu(venit_med)
{
	this->nume=new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
}

void Localitate::afisare()
{
	cout<<"Nume: "<<nume<<endl;
	cout<<"Nr Locuitori: "<<nr_locuitori<<endl;
	cout<<"Venit Mediu: "<<venit_mediu<<endl;
}

int Localitate::getVenitMediu()
{
	return venit_mediu;
}

int Localitate::getNrLocuitori()
{
	return nr_locuitori;
}

Localitate::~Localitate()
{
	delete []nume;
}
