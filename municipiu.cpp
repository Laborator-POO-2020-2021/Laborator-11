#include "municipiu.hpp"

Municipiu::Municipiu():Oras(),regiune(NULL){}

Municipiu::Municipiu(const char* regiune, int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu):
Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
	this->regiune = new char[strlen(regiune)+1];
	strcpy(this->regiune,regiune);
}

Municipiu& Municipiu::operator=(const Municipiu& obj) 
{
	Localitate::operator=(obj);
	Oras::operator=(obj);
	if(regiune!=NULL) 
	 	delete []regiune;
	 	
	this->regiune = new char[strlen(obj.regiune)+1];
	strcpy(this->regiune,regiune);
	 
	return *this;
}

char* Municipiu::getRegiune()
{
	return regiune;
}

void Municipiu::afisare()
{
//	cout << "Nume: " << Localitate::getNume() << endl;
//	cout << "Numar de locuitori: " << Localitate::getNrLocuitori() << endl;
//	cout << "Venit mediu: " << Localitate::getVenitMediu() << endl;
//	cout << "Bonus venit: " << Oras::getBonusVenit() << endl;

	Oras::afisare();
	cout << "Regiune: " << regiune << endl;
}

Municipiu::~Municipiu()
{
	delete []regiune;
}
