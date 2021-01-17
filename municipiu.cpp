#include "municipiu.hpp"

Municipiu::Municipiu():regiune(NULL),Oras(){}

Municipiu::Municipiu(const char* regiune,const int bonus_venit,const char *nume,const int nr_locuitori,const int venit_mediu):Oras(bonus_venit,nume,nr_locuitori,venit_mediu)
{
	this->regiune=new char[strlen(regiune)+1];
	strcpy(this->regiune,regiune);
}

Municipiu::Municipiu(const Municipiu& obj)
{
	regiune=NULL;
	*this=obj;
}

Municipiu& Municipiu::operator=(const Municipiu& obj)
{
	Oras::operator=(obj);
	if(regiune!=NULL)
	  delete []regiune;
	this->regiune=new char[strlen(obj.regiune)+1];
	strcpy(this->regiune,obj.regiune);
	
	return *this;
}

int Municipiu::getVenit()
{
	int s=Oras::getVenit();
	
	return s;
}

int Municipiu::getNr()
{
	int nr=Oras::getNr();
	
	return nr;
}

char* Municipiu::getNume()const
{
   	return "";
}


void Municipiu::afisare()
{
	Oras::afisare1();
	cout<<".Regiune: "<<regiune;
}

Municipiu::~Municipiu()
{
	delete []regiune;
}

