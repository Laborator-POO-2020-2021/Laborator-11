#define _CRT_SECURE_NO_WARNINGS
#include "Municipiu.h"
#include <iostream>

Municipiu::Municipiu()
{
	regiune = NULL;
}

Municipiu::Municipiu(char* regiune, int bonus_venit, char* nume, int nr_locuitori, int venit_mediu):Oras(bonus_venit, nume, nr_locuitori, venit_mediu), Localitate(nume, nr_locuitori, venit_mediu)
{
	this->regiune = new char[strlen(regiune) + 1];
	strcpy(this->regiune, regiune);
}

Municipiu::~Municipiu()
{
	delete[] regiune;
}

int Municipiu::getLocuitori()
{
	return nr_locuitori;
}

void Municipiu::print()
{
	std::cout << "\nRegiune:" << regiune << "\nBonus venit:" << bonus_venit << "\nNume municipiu:" << nume << "\nNumar locuitori:" << nr_locuitori << "\nVenit mediu:" << venit_mediu;
}
