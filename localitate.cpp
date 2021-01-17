//Barbuc Andreea 324AB
#include "localitate.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0)
{
}

Localitate::Localitate(const char* nume,int nr_locuitori, int venit_mediu)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume, nume);
	this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

void Localitate::afisare()
{
	cout << "Nume:"<< nume<< endl;
	cout<<"Nr locuitori:"<< nr_locuitori<< endl<< "Venit mediu:"<< venit_mediu<< endl;
}

int Localitate::Nr_locuitori()
{
	return nr_locuitori;
}

int Localitate::Venit_mediu()
{
	return venit_mediu;
}

Localitate::~Localitate()
{
	delete []nume;
}
