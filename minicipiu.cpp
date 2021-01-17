#include "minicipiu.hpp"

Minicipiu::Minicipiu():Oras(),regiune(NULL){}

Minicipiu::Minicipiu(const char *regiune, const char *nume, int nr, int venit, int bonus): Oras(nume, nr, venit, bonus)
{
	this->regiune = new char[strlen(regiune) + 1];
	strcpy(this->regiune, regiune);
}

Minicipiu::~Minicipiu()
{
	delete []regiune;
}

void Minicipiu::afisare()
{
	this->Oras::afisare();
	cout << "Regiune: " << regiune << endl;
}
