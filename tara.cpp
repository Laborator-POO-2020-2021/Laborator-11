#include "tara.hpp"

Tara::Tara():v(NULL){}

Tara::Tara(Localitate ** w):v(w){}

int Tara::NrLoc()
{
	int i = 0, nr_loc = 0 ;
	while(v[i])
	{
		nr_loc = nr_loc + v[i]->getNrLocuitori();
		i++;
	}
	
	return nr_loc;
}

int Tara::VenitMed()
{
	int i = 0, venit_med = 0;
	while(v[i])
	{
		venit_med = venit_med + v[i]->getVenitMediu();
		i++;
	}
	
	return venit_med;
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

Tara::~Tara()
{
	delete []v;
}
