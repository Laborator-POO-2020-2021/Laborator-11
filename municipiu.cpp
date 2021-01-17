#include "municipiu.hpp"

Municipiu :: Municipiu()
{
	regiune = NULL;
}

Municipiu :: Municipiu(const char* regiune,int venit_m,int bonus_m,int nrloc,const char* Nume): Oras(venit_m,bonus_m,nrloc,Nume)
{
	this->regiune = new char[strlen(regiune) + 1];
	strcpy(this->regiune,regiune);
}

void Municipiu::afisare()
{
	Oras::afisare();
	cout<<"Regiune: "<<regiune<<endl;
}
Municipiu::~Municipiu()
{
	delete[] regiune;
}
