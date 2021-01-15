//Antohi Sorin 324AB

#include "capitala.h"

Capitala::Capitala():Oras(),tara(NULL)
{
	
}

Capitala::Capitala(char *num,int locuitori,int venit,int bonus,char *tar):Oras(num,locuitori,venit,bonus)
{
	this->tara=new char[strlen(tar)+1];
	assert(this->tara!=NULL);
	strcpy(this->tara,tar);
}

Capitala::~Capitala()
{
	delete[]this->tara;
}

ostream& operator<<(ostream& out, const Capitala& tar)
{
	out << (Oras&)tar;
	out << "Acest oras este capitala tarii " << tar.tara<<".";
	return out;
}

Capitala& Capitala::operator=(const Capitala cap)
{
	Oras::operator=(cap);
	this->tara=new char[strlen(cap.tara)+1];
	assert(this->tara!=NULL);
	strcpy(this->tara,cap.tara);
	return *this;
}
void Capitala::afisare()
{
	Oras::afisare();
	cout << "Acest oras este capitala tarii " << this->tara<<".";
}
