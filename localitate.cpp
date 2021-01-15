#include "localitate.hpp"
Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0){}

Localitate::Localitate(const char *n,int nr,int v):nr_locuitori(nr),venit_mediu(v)
{
	nume=new char[strlen(n)+1];
	strcpy(nume,n);
}

Localitate::~Localitate()
{
	delete []nume;
}

void Localitate::afisare()
{
	cout<<"nume: "<<nume<<" "<<"numar locuitor: "<<nr_locuitori<<" "<<"venit mediu:"<<venit_mediu<<" ";
}

int Localitate::locuitori()
{
	return nr_locuitori;
}

int Localitate::venit()
{
	return venit_mediu;
}
