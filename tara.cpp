#include "tara.hpp"

Tara::Tara():v(NULL)
{
	
}

Tara::Tara(Localitate **v)
{
	this->v = v;
}

int Tara::getNrLoc()
{
	int nr = 0;
	while(v[nr] != NULL)
	{
		nr++;
	}
	
	int nr_locuitori = 0;
	
	for(int i = 0; i < nr; i++)
	{
		nr_locuitori = nr_locuitori + v[i]->getLoc();
	}
	return nr_locuitori;
}

float Tara::getVenit()
{
	int nr = 0;
	while(v[nr] != NULL)
	{
		nr++;
	}
	
	int venit = 0;
	
	for(int i = 0; i < nr; i++)
	{
		venit = venit + v[i]->getVenit();
	}
	
	return venit/(float)nr;
}

void Tara::afisare()
{
	int nr = 0;
	while(v[nr] != NULL)
	{
		nr++;
	}
	
	for(int i = 0; i < nr; i++)
	{
		v[i]->afisare();
	}
}

Tara::~Tara()
{
	delete []v;
}

