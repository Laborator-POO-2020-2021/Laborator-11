#include "capitala.h"



Capitala::Capitala() :tara(NULL), Oras()
{

}
Capitala::Capitala(const char*tar, int a, const char* nume, int b, int c) :Oras(a, nume, b, c)
{

	this->tara = new char[strlen(tar) + 1];
	strcpy(this->tara, tar);

}

Capitala::Capitala(const Capitala& obj)
{
	Oras::nume = NULL;
	tara = NULL;
	*this = obj;

}
Capitala& Capitala::operator =(const Capitala& obj)
{
	Oras::operator=(obj);
	if (tara != NULL)
		delete[]tara;

	tara = new char[strlen(obj.tara) + 1];
	strcpy(this->tara, obj.tara);

	return *this;
}
Capitala::~Capitala()
{
	delete[]tara;
}
void Capitala::afisare()
{
	Oras::afisare();
	cout << "tara din capitala: " << tara <<" ";
	

}