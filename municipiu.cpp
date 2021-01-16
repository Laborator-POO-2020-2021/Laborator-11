#include "municipiu.h"



Municipiu::Municipiu() :regiune(NULL), Oras()
{

}
Municipiu::Municipiu(const char* tar, int a, const char* nume, int b, int c) : Oras(a, nume, b, c)
{

	this->regiune = new char[strlen(tar) + 1];
	strcpy(this->regiune, tar);

}

Municipiu::Municipiu(const Municipiu& obj)
{
	Oras::nume = NULL;
	regiune = NULL;
	*this = obj;

}
Municipiu& Municipiu::operator =(const Municipiu& obj)
{
	Oras::operator=(obj);
	if (regiune != NULL)
		delete[]regiune;

	regiune = new char[strlen(obj.regiune) + 1];
	strcpy(this->regiune, obj.regiune);

	return *this;
}
Municipiu::~Municipiu()
{
	delete[]regiune;
}
void Municipiu::afisare()
{
	Oras::afisare();
	cout << "regiune din Municipiu: " << regiune<<" ";
	

}