#include "tara.hpp"

Tara::Tara():v(NULL){}

Tara::Tara(Localitate **c)
{
	v = c;
}

Tara::~Tara()
{
	delete []v;
}

void Tara::afisare()
{
	int i =0;
	while(v[i])
	{
		v[i]->afisare();
		cout<<endl;
		i++;	
	}
}

int Tara::recensamant()
{
	int s = 0;
	int i =0;
	while(v[i]!=NULL)
	{
		s += v[i]->getLocuitori();
		i++;
	}
	
	return s;
}

int Tara::buget()
{
	int s = 0;
	int i =0;
	while(v[i]!=NULL)
	{
		s += v[i]->getVenit();
		i++;
	}
	
	return s;
}
