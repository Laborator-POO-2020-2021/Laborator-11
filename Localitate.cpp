#include "Localitate.hpp"

Localitate::Localitate(): nume(NULL), nr_locuitori(0), venit_mediu(0){}

Localitate::Localitate(char *nume, int nr_locuitori, int venit_mediu): nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
	this->nume=new char[strlen(nume)+1];
	strcpy(this->nume, nume);
}

void Localitate::afisare()
{
	cout << "Nume localitate: " << nume << endl;
	cout << "Nr. locuitori: " << nr_locuitori << endl;
	cout << "Venit mediu: " << venit_mediu << endl;
}

bool Localitate::isOras()
{
	return 0;
}

int Localitate::venit_total()
{
	return venit_mediu;
}

int Localitate::locuitori()
{
	return nr_locuitori;
}
~Localitate::Localitate()
{
	delete []nume;
}



