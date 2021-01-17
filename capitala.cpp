#include "capitala.hpp"

Capitala::Capitala():Oras(),tara(NULL){}

Capitala::Capitala(const char *tara, const char *nume, int nr, int venit, int bonus): Oras(nume, nr, venit, bonus)
{
	this->tara = new char[strlen(tara) + 1];
	strcpy(this->tara, tara);
}

Capitala::~Capitala()
{
	delete []tara;
}

void Capitala::afisare()
{
	this->Oras::afisare();
	cout << "Tara: " << tara << endl;
}

