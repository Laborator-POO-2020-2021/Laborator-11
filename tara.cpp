#include "tara.hpp"

Tara::Tara()
{
	v=NULL;		
}

Tara::Tara(Localitate**v)
{
this->v=new Localitate*[5];
this->v=v;
	
}

Tara::Tara(const Tara&obj)
{
	v=NULL;
	*this=obj;
	
}

Tara& Tara:: operator=(const Tara&obj)
{
	if(v!=NULL)
	{
		delete[] v;
		}	
		v=new Localitate*[5];
		for(int i=0;i<5;i++)
		v[i]=obj.v[i];
}
	
Tara::~Tara()
{
	delete []v;
}



int Tara::getVenit()
{
	int total=0;
	for(int i=0;i<5;i++)
	if(v[i]!=NULL)
	{
	total=total+v[i]->getVenit();
    }
    
    
	return total;
}

int Tara::getLocuitori()
{
	int populatie=0;
	for(int i=0;i<5;i++)
	if(v[i]!=NULL)
	{
	populatie=populatie+v[i]->getLocuitori();
    }
    cout<<endl;
	return populatie;
}


void Tara::afisare()
{
	for(int i=0;i<5;i++)
	{
		if(v[i]!=NULL)
		{
			v[i]->afisare();
			cout<<endl;
		}
		
	}
	
	
	
}

