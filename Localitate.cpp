#include "Localitate.h"

Localitate::Localitate()
{
	nume = NULL;
	nr_locuitori = 0;
	venit_mediu = 0;
}

Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu)
{
	delete[] this->nume;
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume, nume);

	this->nr_locuitori = nr_locuitori;
	this->venit_mediu = venit_mediu;
}

Localitate::Localitate(const Localitate& obj)
{
	*this = obj;
}

Localitate& Localitate::operator=(const Localitate& obj)
{
	delete[] this->nume;
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume, obj.nume);

	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;
	return *this;
}

Localitate::~Localitate()
{
	delete[] nume;
}

int Localitate::get_nr_locuitori() const
{
	return this->nr_locuitori;
}

int Localitate::get_venit_mediu() const
{
	return this->venit_mediu;
}

void Localitate::afisare(ostream& out)
{
	out << "Nume: " << nume << ", Nr_locuitori: " << nr_locuitori << ", Venit_mediu: " << venit_mediu << endl;
}

ostream &operator<<(ostream& out, Localitate& obj)
{
	obj.afisare(out);
	return out;
}
