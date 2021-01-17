#include "Municipiu.hpp"

Municipiu::Municipiu():regiune(NULL),Oras()
{
}

Municipiu::Municipiu(const char* regiune,int bonus_venit,const char *nume,int nr_loc,int venit_med):
			Oras(bonus_venit,nume,nr_loc,venit_med)
{
	this->regiune=new char[strlen(regiune) + 1];
	strcpy(this->regiune,regiune);
}

void Municipiu::afisare()
{
	cout<<"Regiune: "<<regiune<<endl;
	Oras::afisare();
}

Municipiu::~Municipiu()
{
	delete []regiune;
}
