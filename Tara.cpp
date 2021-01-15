#include "Tara.hpp"

Tara::Tara()
{
	v=NULL;
}

Tara::Tara(Localitate **v)
{
	this->v=new Localitate*[5];
	for(int i=0; i<5; i++)
		this->v[i]=v[i];
}

Tara::Tara(const Tara &obj)
{
	v=NULL;
	*this=obj;
}

Tara& Tara::operator=(const Tara &obj)
{
	this->v=new Localitate*[5];
	for(int i=0; i<5; i++)
		this->v[i]=obj.v[i];
}

int Tara::getNr()
{
	int s=0;
	
	for(int i=0; i<4; i++)
		s=s+v[i]->getNrLoc();
	
	return s;
}

Tara::afisare()
{
	for(int i=0; i<4; i++)
		{
			v[i]->afisare();
			cout<<endl;
		}
}

int Tara::getVnt()
{
	int s=0;
	
	for(int i=0; i<4; i++)
		s=s+v[i]->getVenit();
	
	return s;
}

Tara::~Tara()
{
	for(int i=0; i<5; i++)
		delete v[i];
		
	delete []v;
}
