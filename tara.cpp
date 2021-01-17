#include "tara.hpp"

Tara::Tara():v(NULL){}

Tara::Tara(Localitate **x)
{
	this->v=x;
}

Tara &Tara::operator=(const Tara &obj)
{
	*this=obj;
}

int Tara::getNrLocuitori()
{
	int i, s;
	i = s = 0;
	while(v[i] != NULL)
	{
		s += v[i]->getNrLoc();
		i++;
	}
	return s;
}

int Tara::getVenit()
{
	int i, s;
	i = s = 0;
	while(v[i] != NULL)
	{
		s+= v[i]->getVenit();
		i++;
	}
	return s;
}

void Tara::afisare()
{
	int i = 0;
	while(v[i] !=NULL)
	{
		v[i]->afisare();
		cout<<endl;
		i++;
	}
}

Tara::~Tara()
{
	int i = 0;
	while(v[i] != NULL)
		delete[] v[i];
	delete[] v;
	cout<<"destructor Tara"<<endl;
}
