#include "Capitala.h"

Capitala::Capitala():Oras()
{
	tara = NULL;
}

Capitala::Capitala(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char* tara) : Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
	delete[] this->tara;
	this->tara = new char[strlen(tara) + 1];
	strcpy(this->tara, tara);
}

Capitala::Capitala(const Capitala& obj)
{
	*this = obj;
}

Capitala& Capitala::operator=(const Capitala& obj)
{
	delete[] this->nume;
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume, obj.nume);

	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;
	this->bonus_venit = obj.bonus_venit;

	delete[] this->tara;
	this->tara = new char[strlen(obj.tara) + 1];
	strcpy(this->tara, obj.tara);

	return *this;
}

void Capitala::afisare(ostream& out)
{
	out << "Nume: " << nume << ", Nr_locuitori: " << nr_locuitori << ", Venit_mediu: " << venit_mediu << ", Bonus venit: " << bonus_venit << ", Tara: " << tara << endl;
}

Capitala::~Capitala()
{
	delete[] tara;
}

ostream& operator<<(ostream& out,  Capitala& obj)
{
	obj.afisare(out);
	return out;
}
