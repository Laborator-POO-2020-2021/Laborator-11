#include "Tara.hpp"

Tara::Tara():v(NULL)
{
	
}
Tara::Tara(Localitate **vLocalitati):v(vLocalitati)
{
}
	
void Tara::afisare()	//parcurgem pana la NULL
{
	int i=0;
	while(v[i]!=NULL)
	{
		cout<<"Localitatea "<<i+1<<": "<<endl;
		v[i]->afisare();
		i++;
		cout<<endl;
	}
}
int Tara::getNrLocuitori()
{
	int nrLocuitori=0;
	int i=0;
	while(v[i]!=NULL)
	{
		nrLocuitori=nrLocuitori+v[i]->getNrLocuitori();
		i++;
	}
	return nrLocuitori;
}
	
float Tara::getVenitMediu()
{
	float venitMediu=0;
	int i=0;
	while(v[i]!=NULL)
	{
		venitMediu=venitMediu + v[i]->getVenitMediu();
		i++;
	}
	venitMediu = venitMediu/i;
	return venitMediu;
}
	
Tara::~Tara()
{
	delete	[]v;
}
