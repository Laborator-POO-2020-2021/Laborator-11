#include "Tara.hpp"

Tara::Tara():v(NULL)
{
}
Tara::Tara(Localitate ** v):v(v)
{
	
}
Tara::~Tara()
{
	delete []v;
}
void Tara::afisare()
{
	int i=0;
	while(v[i] != NULL)
	{
		v[i]->afisare();
		cout<<endl;
		i++;
	}
}

int Tara::Locuitori()
{
	int i = 0 ,locuitori = 0 ;
	while(v[i] != NULL)
	{
		locuitori = locuitori + v[i]->getLocuitori();
		i++;
	}
	
	return locuitori;
}

int Tara::Venit()
{
	int i = 0 , venit = 0;
	while(v[i] != NULL)
	{
		venit = venit + v[i]->getVenitMediu();
		i++;
	}
	
	return venit;
}
