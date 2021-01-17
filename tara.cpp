#include "tara.hpp"

Tara::Tara():v(NULL){}

Tara::Tara(Localitate** v)
{
	int nr=0;
	while(v[nr]!=NULL)
	{
	    nr++; 
	}
	  this->v=new Localitate*[nr+1];
	    for(int i=0;i<nr;i++)
	     this->v[i]= v[i];
	    this->v[nr]=NULL;
}

Tara::Tara(const Tara&obj)
{
	v=NULL;
	*this=obj;
}

Tara& Tara::operator=(const Tara& obj)
{
	if(v!=NULL)
	 delete []v;
	int nr=0;
	while(obj.v[nr]!=NULL)
	{
	    nr++; 
	}
	  this->v=new Localitate*[nr+1];
	    for(int i=0;i<nr;i++)
	     this->v[i]= obj.v[i];
	    this->v[nr]=NULL;
	
	return *this;
	
}
void Tara::afisare()
{
	int i=0;
	while(v[i]!=NULL)
	{
	    v[i]->afisare();
	    cout<<endl;
	    i++;
	    
	}
}

int Tara::getVenit()
{
	int nr=0;
	while(v[nr]!=NULL)
	{
	    nr++; 
	}
	  int s=0;
	  for(int i=0;i<nr;i++)
	  {
	  	s=s+v[i]->getVenit();
	  }
	  
	  return s;
}

int Tara::getNr()
{
	int nr=0;
	while(v[nr]!=NULL)
	{
	    nr++; 
	}
	  int n=0;
	  for(int i=0;i<nr;i++)
	  {
	  	n=n+v[i]->getNr();
	  }
	  
	  return n;
}

	
char* Tara::getNume()const
{

int nr=0,k,i;
char s[20];

	while(v[nr]!=NULL  )
	{

	    nr++; 
	}
	for(i=0;i<nr;i++)
	  {
	  	k= (typeid(*v[i]) == typeid(Capitala));
	  	
	  		  	if(k==1)
	  	{
	  		
		  
	  strcpy(s, v[i]->getNume());
	  
}

	  }
	   // return v[i]->getNume();
	 return s;

	  
}

Tara::~Tara()
{
	delete []v;
}
