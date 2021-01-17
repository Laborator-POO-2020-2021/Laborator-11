#include "Tara.hpp"
#include "Oras.hpp"

Tara::Tara():v(NULL),Localitate(){
}

Tara::Tara(Localitate **v){
	this->v = v;
}

int Tara::getLocuitori(){
	int i = 0;
	int locuitori = 0;
	while(v[i]!=NULL)
	{
		locuitori = locuitori + v[i]->getNrlocuitori();
		i++;
	}
	return locuitori;
}

double Tara::getVenitMed(){
	int i = 0;
	int s = 0;
	while(v[i]!=NULL)
	{
		s = s + v[i]->getVenit();
		i++;
	}
	return double(s)/i;
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

