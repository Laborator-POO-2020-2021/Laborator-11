#include "tara.hpp"

Tara::Tara()
{
	v = NULL;
}

Tara::Tara(Localitate**v)
{
	this->v = new Localitate[5];
	this->v = v;
}

Tara::Tara(const Tara& obj)
{
	v = NULL;
	*this = obj;
}

Tara& Tara::operator=(const Tara&obj)
{
	if(v != NULL)
	{
		delete[]v;
	}
	v = new Localitate*[5];
	for(int i = 0; i < 5; i++)
	v[i] = obj.v[i];
}

Tara::~Tara()
{
	delete[]v;
}

int Tara::getVenit()
{
	int t = 0;
	for(int i = 0; i < 5; i++)
	{
		t = t + v[i]->getVenit();
	}
	return t;
}

int Tara::getLocuitori()
{
	int t = 0;
	for( int i =0; i < 5; i++)
		if(v[i] != NULL)
		{
			t = t + v[i]->getLocuitori();
		}
	return t;
}

void Tara::afisare()
{
	for(int i = 0; i < 5; i++)
	{
		if(v[i] != NULL)
			{v[i]->afisare();
			cout<<endl;
			}
	}
}
