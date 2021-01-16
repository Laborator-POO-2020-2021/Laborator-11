#include "capitala.hpp"

Capitala::Capitala():Oras(), tara(NULL){}

Capitala::Capitala(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char* tara):
Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
	this -> tara = new char[strlen(tara) + 1];
	strcpy(this -> tara, tara);
}

void Capitala::afisare()
{
	Oras::afisare();
	cout << "Date capitala:" << endl;
	cout << "Tara:" << tara << endl;
	cout << endl;	
}

int Capitala::getLocuitori()
{
	return (this -> nr_locuitori);
}

int Capitala::getVenit()
{
	return (this -> venit_mediu + this -> bonus_venit);
}

Capitala::~Capitala()
{
	delete []tara;
}
