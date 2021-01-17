#include "oras.hpp"

Oras::Oras():bonus_venit(0), Localitate(){}

Oras::Oras(int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu): bonus_venit(bonus_venit), Localitate(nume, nr_locuitori, venit_mediu){}

Oras::Oras(const Oras &obj)
{
	nume=NULL;
	*this=obj;
}

Oras& Oras::operator=(const Oras &obj)
{
	Localitate::operator=(obj);
	this->bonus_venit=obj.bonus_venit;
	return *this;
}

int Oras::getBonusVenit() const
{
	return this->venit_mediu;
}

int Oras::getVenit() 
{
	return this->venit_mediu+ this->bonus_venit;
}

void Oras::afisare()
{
	Localitate::afisare();
	cout << ". Bonus venit: " << bonus_venit;
}

Oras::~Oras(){}
