#include "tara.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"

Tara::Tara()
{
	v=NULL;
}
Tara::Tara(Localitate **v1)
{
	v=v1;
}
Tara::~Tara()
{
	delete []v;
}
void Tara::afisare()
{
	int nr=0, venit=0;
	Localitate *aux=*v;
	while(aux)
	{
		nr++;
		aux=v[nr];
	}
	for(int i=0;i<nr;i++)
		v[i]->afisare();
}
int Tara::getLocuitori()
{
	int nr=0, loc=0;
	Localitate *aux=*v;
	while(aux)
	{
		nr++;
		aux=v[nr];
	}
	for(int i=0;i<nr;i++)
		loc=loc+v[i]->getNRlocuitori();
	return loc;
}
float Tara::getVenit()
{
	int nr=0, venit=0;
	Localitate *aux=*v;
	while(aux)
	{
		nr++;
		aux=v[nr];
	}
	for(int i=0;i<nr;i++)
	{
		venit=venit+((Oras*)v[i])->getVenit();
	}
	return venit/(float)nr;
}

