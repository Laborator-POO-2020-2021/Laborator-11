#include "Municipiu.hpp"

Municipiu::Municipiu(): Oras(), regiune(NULL){}

Municipiu::Municipiu(char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, char *regiune): Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
	this->regiune=new char[strlen(regiune)+1];
	strcpy(this->regiune, regiune);
}

void Municipiu::afisare()
{
	((Oras&)(*this)).afisare();
	cout << "Regiune: " << regiune << endl;
}

bool Municipiu::isOras()
{
	return 1;
}

int Municipiu::venit_total()
{
	return ((Oras&)(*this)).venit_total();
}

int Municipiu::locuitori()
{
	return ((Oras&)(*this)).locuitori();
}

~Municipiu::Municipiu()
{
	delete []regiune;
}
