#include "municipiu.hpp"

Municipiu::Municipiu():regiune(NULL), Oras(){}

Municipiu::Municipiu( const char *regiune, int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu): Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
	this->regiune=new char[strlen(regiune)+1];
	strcpy(this->regiune, regiune);
}
Municipiu::Municipiu(const Municipiu &obj)
{
	nume=NULL;
	regiune=NULL;
	*this=obj;
}

Municipiu& Municipiu::operator=(const Municipiu &obj)
{
	Oras::operator=(obj);
	if (regiune != NULL)
		delete []regiune;
	this->regiune = new char[strlen(obj.regiune) + 1];
	strcpy(this->regiune,obj.regiune);
	return *this;
}

char* Municipiu::getRegiune() const
{
	return this->regiune;
}

void Municipiu::afisare()
{
	Oras::afisare();
	cout << ". Regiune: " << regiune;
}

Municipiu::~Municipiu()
{
	delete []regiune;
}
