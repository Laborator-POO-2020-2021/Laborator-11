// Implementare metode pentru clasa Capitala - clasa derivata a clasei Oras

#include"Capitala.hpp"
#include<iostream>
#include<string.h>
using namespace std;

Capitala:: Capitala():Oras()
{
	tara = NULL;
}

Capitala::Capitala(char* country,int venit,int bonus,int locuitori,char* name): Oras(venit, bonus,locuitori,name) 
{
	tara = new char[strlen(country) + 1];
	strcpy(tara,country);
}

char* Capitala::getTara()
{
	return tara;
}

void Capitala::afisare()
{
	Oras::afisare();
	cout<<"Tara: "<<tara<<endl;
}

Capitala::~Capitala()
{
	delete[] tara;
}
