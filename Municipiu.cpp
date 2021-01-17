#include "Municipiu.hpp"

Municipiu::Municipiu():Oras()
{
	this->regiune = NULL;
}

Municipiu::Municipiu(const char* nume, int nr_locuitori, int venit, int bonus, const char* regiune):Oras(nume, nr_locuitori, venit, bonus)
{
	this->regiune = new char[strlen(regiune) + 1];
	strcpy(this->regiune,regiune);	
}

Municipiu::~Municipiu()
{
	delete []regiune;
}

void Municipiu::afisare()
{
	Oras::afisare();
	cout << "Regiune: " << this->regiune << endl;
}

Municipiu& Municipiu::operator=(const Municipiu& obj)
{
	Oras::operator =(obj);
	if (this->regiune != NULL)
		delete []this->regiune;
	this->regiune = new char[strlen(obj.regiune)+1];
	strcpy(this->regiune,obj.regiune);
	
	return *this; 
}

