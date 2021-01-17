#define _CRT_SECURE_NO_WARNINGS
#include "Localitate.h"
#include <iostream>

Localitate::Localitate()
{
	nume = NULL;
	nr_locuitori = 0;
	venit_mediu = 0;
}

Localitate::Localitate(char* nume, int nr_locuitori, int venit_mediu)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume, nume);
	this->nr_locuitori = nr_locuitori;
	this->venit_mediu = venit_mediu;
}

Localitate::~Localitate()
{
	delete[] nume;
}

int Localitate::getLocuitori()
{
	return nr_locuitori;
}

void Localitate::print()
{
	std::cout << "\nNumele localitatii:" << nume << "\nNumarul de locuitori:" << nr_locuitori << "\nVenitul mediu:" << venit_mediu;
}

int Localitate::getVenit()
{
	return venit_mediu;
}
