#include "capitala.hpp"

Capitala::Capitala():tara(NULL), Oras(){}

Capitala::Capitala( const char *tara, int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu): Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
	this->tara=new char[strlen(tara)+1];
	strcpy(this->tara, tara);
}
Capitala::Capitala(const Capitala &obj)
{
	nume=NULL;
	tara=NULL;
	*this=obj;
}

Capitala& Capitala::operator=(const Capitala &obj)
{
	Oras::operator=(obj);
	if (tara != NULL)
		delete []tara;
	this->tara = new char[strlen(obj.tara) + 1];
	strcpy(this->tara, obj.tara);
	return *this;
}

char* Capitala::getTara() const
{
	return this->tara;
}

void Capitala::afisare()
{
	Oras::afisare();
	cout << ". Tara: " << tara;
}

Capitala::~Capitala()
{
	delete []tara;
}
