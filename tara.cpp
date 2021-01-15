//Antohi sorin 324AB

#include "tara.h"

Tara::Tara():v(NULL)
{
	
}

Tara::~Tara()
{
	delete[]this->v;
}

Tara::Tara(Localitate **loc)
{
	this->v=loc;
}

int Tara::locuitori()
{
	int i=0,s=0;
	while(v[i]!=NULL)
	{
		s=s+v[i]->numar_locuitori();
		i++;
	}
	return s;
}
float Tara::venit()
{
	
	int i=0,s=0;
	while(v[i]!=NULL)
	{
		s=s+v[i]->castig();
		i++;
	}
	return s/2;
}
void Tara::afisare()
{
	int i=0;
	while (this->v[i]!=NULL)
	{
		v[i]->afisare();
		i++;
	}
}
