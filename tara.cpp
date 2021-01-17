#include "tara.hpp"

Tara::Tara():v(NULL){}

Tara::Tara(Localitate** v)
{
	this->v = new Localitate*[5];
	int i=0;
	while (v[i]!=NULL)
	{
		this->v[i] = v[i];
		i++;
	}
}

Tara::Tara(const Tara& obj)
{
	v = NULL;
	*this = obj;
}

Tara& Tara::operator=(const Tara& obj)
{
	if (v != NULL) 
	    delete []v;
	this->v = new Localitate*[5];
	int i=0;
	while (v[i]!=NULL)
	{
		this->v[i] = obj.v[i];
		i++;
	}
	return *this;
}

Tara::~Tara()
{
	delete[] v;
}

void Tara::afisare()
{
	int i=0;
	while (v[i]!=NULL)
	{
		v[i]->afisare();
		i++;
	}
	cout << endl << endl;
}

int Tara::getLoc()
{
	int sum=0, i=0;
	while (v[i]!=NULL)
	{
		sum = sum + v[i]->getLoc();
		i++;
	}
	return sum;
}

int Tara::getVenit()
{
	int i=0, sum=0;
	while (v[i]!=NULL)
	{
		sum = sum + v[i]->getVenit();
		i++; 
	}
	return sum;
}
