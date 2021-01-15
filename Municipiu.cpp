// Implementare metode pentru clasa Municipiu - clasa derivata a clasei Oras

#include"Municipiu.hpp"
#include<iostream>
#include<string.h>
using namespace std;

Municipiu :: Municipiu() : Oras()
{
	regiune = NULL;
}

Municipiu :: Municipiu(char* reg,int venit,int bonus,int locuitori,char* name): Oras(venit,bonus,locuitori,name)
{
	regiune = new char[strlen(reg) + 1];
	strcpy(regiune,reg);
}

char* Municipiu :: getRegiune()
{
	return regiune;
}

void Municipiu::afisare()
{
	Oras::afisare();
	cout<<"Regiune: "<<regiune<<endl;
}

Municipiu::~Municipiu()
{
	delete[] regiune;
}
