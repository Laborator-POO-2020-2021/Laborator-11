#include"municipiu.hpp"

Municipiu::Municipiu():Oras()
{
	regiune = NULL;
}

Municipiu::Municipiu(const char*nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char*regiune):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{
	this->regiune = new char[strlen(regiune)+1];
	strcpy(this->regiune,regiune);
}

Municipiu::Municipiu(const Municipiu& obj)
{
	regiune = NULL;
	*this = obj;
}

Municipiu& Municipiu::operator=(const Municipiu& obj)
{
	Oras::operator = (obj);
	this->regiune = new char[strlen(obj.regiune)+1];
	strcpy(this->regiune,obj.regiune);
	return *this;
}

void Municipiu::afisare()
{
	Oras::afisare();
	cout<<"regiune: "<<regiune<<endl;
}

Municipiu::~Municipiu()
{
	delete[]regiune;
}
