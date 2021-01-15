// Implementare metode pentru clasa Localitate - clasa de baza

#include<iostream>
#include<string.h>
#include"Localitate.hpp"
using namespace std;

Localitate::Localitate()
{
	nume = NULL;
	nr_locuitori = 0;
	venit_mediu = 0;
}

Localitate::Localitate(char* name,int nr_loc,int venit)
{
	nume = new char[strlen(name) + 1];
	strcpy(nume,name);
	
	nr_locuitori = nr_loc;
	venit_mediu = venit;
}

int Localitate::getVenit()
{
	return venit_mediu;
}

int Localitate::getLocuitori()
{
	return nr_locuitori;
}

char* Localitate::getNume_localitate()
{
	return nume;
}

void Localitate::afisare()
{
	cout<<"Nume Localitate: "<<nume<<endl;
	cout<<"nr_locuitori: "<<nr_locuitori<<endl;
	cout<<"venit_mediu: "<<venit_mediu<<endl;
}

Localitate::~Localitate()
{
	delete[] nume;
}
