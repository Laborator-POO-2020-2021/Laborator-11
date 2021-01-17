#include "Oras.h"

Oras::Oras():Localitate()
{
	bonus_venit = 0;
}

Oras::Oras(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit): Localitate(nume, nr_locuitori, venit_mediu)
{
	this->bonus_venit = bonus_venit;
}

Oras::Oras(const Oras& obj)
{
	*this = obj;
}

Oras::~Oras()
{
}

Oras& Oras::operator=(const Oras& obj)
{
	delete[] this->nume;
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume, obj.nume);

	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;
	this->bonus_venit = obj.bonus_venit;

	return *this;
}

int Oras::get_venit_mediu()
{
	return venit_mediu + bonus_venit;
}

void Oras::afisare(ostream& out)
{
	out << "Nume: " << nume << ", Nr_locuitori: " << nr_locuitori << ", Venit_mediu: " << venit_mediu << ", Bonus venit: " << bonus_venit << endl;
}

ostream& operator<<(ostream& out, Oras& obj)
{
	obj.afisare(out);
	return out;
}
