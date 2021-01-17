#include "tara.hpp"

Tara::Tara():v(NULL)
{
}

Tara::Tara(Localitate **vector):v(vector)
{
}

void Tara::afisare()
{
	int i = 0;
	while(v[i] != NULL)
	{
		v[i]->afisare();
		cout << endl << endl;
		i++;
	}
}

int Tara::locuitori()
{
	int i = 0, locuitori = 0;
	while(v[i] != NULL)
	{
		locuitori = locuitori + v[i]->getNR();
		i++;
	}
	return locuitori;
}

int Tara::Ven()
{
	int i = 0, venit = 0;
	while(v[i] != NULL)
	{
		venit = venit + v[i]->getVenit();
		i++;
	}
	return venit;
}

Tara::~Tara()
{
	delete []v;
}
