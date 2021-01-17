#include "Tara.hpp"

Tara::Tara():v(NULL){}

Tara::Tara(Localitate** v)
{
	this->v=v;
}

int Tara::getNr_Locuitori_Total()
{
	int aux=0;
	int i=0;
	while(v[i]!=NULL)
	{
		aux=aux+v[i]->getLocuitori();
		i++;
	}
	return aux;
}

int Tara::getVenit_Total()
{
	int aux=0;
	int i=0;
	while(v[i]!=NULL)
	{
		aux=aux+v[i]->getVenit_Mediu();
		i++;
	}
	
	return aux/i;
}


void Tara::afisare()
{
	int i=0;
	while (v[i]!=NULL)
	{
		v[i]->afisare();
		cout<<"\n";
		i++;
	}
}
Tara::~Tara()
{
	delete []v;
}

