//Antohi Sorin 324AB

#include "localitate.h"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0)
{
	
}

Localitate::Localitate(char *num, int locuitori, int venit)
{
	this->nume=new char[strlen(num)+1];
	assert(this->nume!=NULL);
	strcpy(this->nume,num);
	this->nr_locuitori=locuitori;
	this->venit_mediu=venit;
}

Localitate::~Localitate()
{
	delete[]this->nume;
}

ostream& operator<<(ostream& out, const Localitate& loc)
{
	out << "\n\nLocalitatea " << loc.nume << " are " << loc.nr_locuitori;
	out << " de locuitori iar venitul mediu este de " << loc.venit_mediu << " RON.";
	return out;
}

Localitate& Localitate::operator=(const Localitate loc)
{
	this->nume=new char[strlen(loc.nume)+1];
	assert(this->nume!=NULL);
	strcpy(this->nume,loc.nume);
	this->nr_locuitori=loc.nr_locuitori;
	this->venit_mediu=loc.venit_mediu;
	return *this;
}

void Localitate::afisare()
{
	cout << "\nLocalitatea " << this->nume << " are " << this->nr_locuitori;
	cout << " de locuitori iar venitul mediu este de " << this->venit_mediu << " RON.";	
}
