#include "Municipiu.h"

Municipiu::Municipiu():Oras()
{
	regiune = NULL;
}

Municipiu::Municipiu(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char* regiune):Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
	delete[] this->regiune;
	this->regiune = new char[strlen(regiune) + 1];
	strcpy(this->regiune, regiune);
}

Municipiu::Municipiu(const Municipiu& obj)
{
	*this = obj;
}

Municipiu& Municipiu::operator=(const Municipiu& obj)
{
	delete[] this->nume;
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume, obj.nume);

	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;
	this->bonus_venit = obj.bonus_venit;

	delete[] this->regiune;
	this->regiune = new char[strlen(obj.regiune) + 1];
	strcpy(this->regiune, obj.regiune);

	return *this;

}

void Municipiu::afisare(ostream& out)
{
	out << "Nume: " << nume << ", Nr_locuitori: " << nr_locuitori << ", Venit_mediu: " << venit_mediu << ", Bonus venit: " << bonus_venit << ", Regiune: " << regiune << endl;
}

Municipiu::~Municipiu()
{
	delete[] regiune;
}

ostream& operator<<(ostream& out, Municipiu& obj)
{
	obj.afisare(out);
	return out;
}