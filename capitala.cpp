#include "capitala.hpp"

Capitala::Capitala() :tara(NULL), Oras()
{
}

Capitala::Capitala(const char *tar, int bonus_ven, const char* nume, int nr_loc, int venit_med) :Oras(bonus_ven, nume, nr_loc, venit_med)
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

Capitala& Capitala::operator=(const Capitala& obj)
{
	Oras::operator=(obj);
	if (tara != NULL)
		delete []tara;
	tara = new char[strlen(obj.tara) + 1];
	strcpy(this->tara, obj.tara);
	return *this;
}

void Capitala::afisare()
{
	Oras::afisare();
	cout << "Tara: " << tara << endl << endl;
}

Capitala::~Capitala()
{
	delete []tara;
}
