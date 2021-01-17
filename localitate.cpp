#include "localitate.hpp"

Localitate::Localitate():nume(NULL), nr_locuitori(0), venit_mediu(0){}

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu): nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
	this->nume=new char[strlen(nume)+1];
	strcpy(this->nume, nume);
}

Localitate::Localitate(const Localitate &obj)
{
	nume=NULL;
	*this=obj;
}

Localitate& Localitate::operator=(const Localitate &obj)
{
	this->nr_locuitori=obj.nr_locuitori;
	this->venit_mediu=obj.venit_mediu;
	if (nume != NULL)
		delete []nume;
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume,obj.nume);
	return *this;
}

char *Localitate::getNume() const
{
	return this->nume;
}

int Localitate::getNrLoc() const 
{
	return this->nr_locuitori;
}

int Localitate::getVenit()
{
	return this->venit_mediu;
}

void Localitate::afisare()
{
	if(nume != NULL)
		cout << "Nume: "<< nume << ". ";
	cout << "Nr. locuitori: " << nr_locuitori << ". Venit mediu:" << venit_mediu;
}

Localitate::~Localitate()
{
	delete []nume;
	cout<<"destructor Localitate"<<endl;
}
