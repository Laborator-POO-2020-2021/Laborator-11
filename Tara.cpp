#include "Tara.hpp"
#include "Oras.hpp"
Tara::Tara():v(NULL), Localitate()
{
}

Tara::Tara(Localitate **v)
{
	this->v = v;    
}

Tara& Tara::operator=(const Tara*& obj)
{
	this->v = obj->v;
	Localitate::operator=(*obj);

	return *this;
}

int Tara::total_locuitori()
{
	int i = 0;
	int total = 0;
	while(v[i]!=NULL)
	{
		total = total + v[i]->nrlocuitori();
		i++;
	}
	return total;
}

double Tara::medie_venit()
{
	int i = 0;
	double s = 0;
	while(v[i]!=NULL)
	{
		s = s + v[i]->get_venit();
		i++;
	}
	return s / i;
}

void Tara::afisare()
{   
	int i = 0;
	while(v[i]!=NULL)
	{
		v[i]->afisare();
		cout << endl;
		i++;
	}
}

Tara::~Tara()
{
	int i = 0;
	while(v[i]!=NULL)
	{
		delete []v[i];
		i++;
	}
	delete []v;
}

