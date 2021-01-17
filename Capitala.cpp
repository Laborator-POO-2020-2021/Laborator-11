#include "Capitala.hpp"

Capitala::Capitala():Oras()
{
	this->tara = NULL;
}

Capitala::Capitala(const char* nume, int nr_locuitori, int venit, int bonus, const char* tara): Oras(nume, nr_locuitori, venit, bonus)
{
	
	this->tara = new char[strlen(tara) + 1];
	strcpy(this->tara,tara);	
}

Capitala::~Capitala()
{
	delete []tara;
}

void Capitala::afisare()
{
	Oras::afisare();
	cout << "Tara: " << this->tara << endl;	
}

Capitala& Capitala::operator=(const Capitala& obj)
{
	Oras::operator =(obj);
	if (this->tara != NULL)
		delete []this->tara;
	this->tara = new char[strlen(obj.tara) + 1];
	strcpy(this->tara, obj.tara);
	
	return *this; 
}

