#include "Tara.hpp"

Tara::Tara()
{
	this->v = NULL;
}

Tara::Tara(Localitate **v)
{
    this->v = v;
}

Tara::~Tara()
{
    int i = 0;
	while(v[i] != NULL)
	{
		delete[] v[i];
		i++;
	}
	delete[] v;
}

void Tara::afisare()
{
	int i = 0;
	while(v[i] != NULL)
	{
		v[i]->afisare();
		cout << endl;
		i++;
	}
}

int Tara::getPopulatie()
{
	int populatie = 0, i = 0;
	while(v[i] != NULL)
	{
		populatie = populatie + v[i]->getNrLocuitori();
		i++;
	}
	return populatie;
}

int Tara::getVenitMediu()
{
	int venit_med = 0, i = 0;
	while(v[i] != NULL)
	{
		venit_med = venit_med + v[i]->getVenit();
		i++;
	}
	return venit_med;
}

