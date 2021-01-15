#include "municipiu.hpp"
Municipiu::Municipiu():Oras(),regiune(NULL){}

Municipiu::Municipiu(const char *r,const char *n,int nr,int v,int b):Oras(n,nr,v,b)
{
	regiune=new char[strlen(r)+1];
	strcpy(regiune,r);
}

Municipiu::~Municipiu()
{
	delete []regiune;
}

void Municipiu::afisare()
{
	cout<<"regiune: "<<regiune<<" ";
	this->Oras::afisare();
}
