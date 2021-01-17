#include "Tara.h"
#include <iostream>

Tara::Tara()
{
	v = NULL;
}

Tara::Tara(int max)
{
	this->v = new Localitate * [max];
}

Tara::Tara(Localitate** v)
{
	int n = 0;
	while (v[n])
		n++;

	this->v = new Localitate * [n];
}

Tara::~Tara()
{
	delete[] v;
}

int Tara::getLocuitori()
{
	int n = 0;
	while (v[n])
		n++;
	int suma = 0;
	for (int i = 0; i < n; i++)
		suma += v[i]->getLocuitori();
	
	return suma;
}

float Tara::getVenit()
{
	int n = 0;
	while (v[n])
		n++;
	float venit = 0;
	for (int i = 0; i < n; i++)
	{
		venit += v[i]->getVenit();
	}
	return venit / (float)n;
}
