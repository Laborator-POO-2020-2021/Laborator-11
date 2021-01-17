#define _CRT_SECURE_NO_WARNINGS
#include "Capitala.h"
#include <iostream>

Capitala::Capitala()
{
	tara = NULL;
}

Capitala::Capitala(char* tara, int bonus_venit, char* nume, int nr_locuitori, int venit_mediu):Oras(bonus_venit, nume, nr_locuitori, venit_mediu), Localitate(nume, nr_locuitori, venit_mediu)
{
	this->tara = new char[strlen(tara) + 1];
	strcpy(this->tara, tara);
}

Capitala::~Capitala()
{
	delete[] tara;
}

int Capitala::getLocuitori()
{
	return nr_locuitori;
}

void Capitala::print()
{
	std::cout << "\nTara:" << tara << "\nBonus venit:" << bonus_venit << "\nNume capitala:" << nume << "\nNumar locuitori:" << nr_locuitori << "\nVenit mediu:" << venit_mediu;

}
