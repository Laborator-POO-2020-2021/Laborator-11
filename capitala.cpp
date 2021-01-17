#include "capitala.hpp"

Capitala::Capitala():tara(NULL),Oras(){}

Capitala::Capitala(const char* tara,const int bonus_venit,const char *nume,const int nr_locuitori,const int venit_mediu):Oras(bonus_venit,nume,nr_locuitori,venit_mediu)
{
	this->tara=new char[strlen(tara)+1];
	strcpy(this->tara,tara);
}

Capitala::Capitala(const Capitala& obj)
{
	tara=NULL;
	*this=obj;
}

Capitala& Capitala::operator=(const Capitala& obj)
{
	Oras::operator=(obj);
	if(tara!=NULL)
	  delete []tara;
	this->tara=new char[strlen(obj.tara)+1];
	strcpy(this->tara,obj.tara);
	
	return *this;
}

int Capitala::getVenit()
{
	int s=Oras::getVenit();
	
	return s;
}

int Capitala::getNr()
{
	int nr=Oras::getNr();
	
	return nr;
}


void Capitala::afisare()
{
    Oras::afisare1();
    cout<<".Tara: "<<tara<<endl;
}

char* Capitala::getNume()const
{
	return tara;
}

Capitala::~Capitala()
{
	delete []tara;
}
