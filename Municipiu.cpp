#include "Municipiu.hpp"

Municipiu::Municipiu():regiune(NULL),Oras(){
	
}


Municipiu::Municipiu(const char* nume,int nr_locuitori,int venit_mediu,int bonus_venit,const char *regiune):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{
	this->regiune=new char[strlen(regiune)+1];
	strcpy(this->regiune,regiune);
}

Municipiu::Municipiu(const Municipiu& obj)
{
	regiune=NULL;
	*this=obj;
}

Municipiu&Municipiu::operator=(const Municipiu& obj)
{
	Oras::operator=(obj);
	if (regiune!=NULL)
	{
		delete []regiune;
	}
	regiune=new char[strlen(obj.regiune)+1];
	strcpy(regiune,obj.regiune);
	
	return *this;
}

Municipiu::~Municipiu()
{
	delete []regiune;
}

void Municipiu::afisare()
{
	Oras::afisare();
	cout<<"Regiune=";
	cout<<regiune<<"\n";
}
