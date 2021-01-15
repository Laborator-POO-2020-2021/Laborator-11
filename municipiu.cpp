//Antohi Sorin 324AB

#include "municipiu.h"

Municipiu::Municipiu():Oras(),regiune(NULL)
{
	
}

Municipiu::Municipiu(char *num, int locuitori,int venit,int bonus,char *reg):Oras(num,locuitori,venit,bonus)
{
	this->regiune=new char[strlen(reg)+1];
	assert(this->regiune!=NULL);
	strcpy(this->regiune,reg);
}

Municipiu::~Municipiu()
{
	delete[]this->regiune;
}

ostream& operator<<(ostream& out, const Municipiu& mun)
{
	out << (Oras&)mun;
	out << "Aceasta localitate este situata in municipiul " << mun.regiune<<".";
	return out;
}

Municipiu& Municipiu::operator=(const Municipiu mun)
{
	Oras::operator=(mun);
	this->regiune=new char[strlen(mun.regiune)+1];
	assert(this->regiune!=NULL);
	strcpy(this->regiune,mun.regiune);
	return *this;
}
void Municipiu::afisare()
{
	Oras::afisare();
	cout << "Aceasta localitate este situata in municipiul " << this->regiune<<".";
}
