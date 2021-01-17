#include "Capitala.hpp"

Capitala::Capitala():Oras()
{
	tara = NULL;
}

Capitala::Capitala(const char *tara, int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu):Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
	this->tara = new char[strlen(tara)+1];
	strcpy(this->tara,tara);
}

Capitala& Capitala::operator=(const Capitala &obj)
{
	if(tara != NULL)
		delete []tara;
	this->tara = new char[strlen(obj.tara)+1];
	strcpy(this->tara, obj.tara);
	Oras::operator=(obj);
	return *this;
}

Capitala::~Capitala()
{
	delete []tara;
}

void Capitala::afisare()
{
	Oras::afisare();
	cout << "Tara: " << tara << endl;
}
