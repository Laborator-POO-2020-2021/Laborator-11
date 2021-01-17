#include "Capitala.hpp"

Capitala::Capitala(): Oras(), tara(NULL){}

Capitala::Capitala(char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, char *tara): Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
	this->tara=new char[strlen(tara)+1];
	strcpy(this->tara, tara);
}

void Capitala::afisare()
{
	((Oras&)(*this)).afisare();
	cout << "Tara: " << tara << endl;
}

bool Capitala::isOras()
{
	return 1;
}

int Capitala::venit_total()
{
	return ((Oras&)(*this)).venit_total();
}

int Capitala::locuitori()
{
	return ((Oras&)(*this)).locuitori();
}
~Capitala::Capitala()
{
	delete []tara;
}
