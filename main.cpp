#include <iostream>

using namespace std;
#include "Localitate.h"
#include "Tara.h"
#include "Oras.h"
#include "Capitala.h"
#include "Municipiu.h"


int main()
{
	
	Localitate **l1;
	l1=new Localitate*[5];
	l1[0]=new Oras("Tara1",123,123,12);
	l1[1]=new Localitate("Bucuresti1",123,123);
	l1[2]=new Municipiu("Teleorman1","Alexandria",123,123,121);
	l1[3]=new Capitala("Romania1","Bucuresti1",123,123,12);
	l1[4]=NULL;
	
	Localitate **l2;
	l2=new Localitate*[5];
	l2[0]=new Oras("Tara2",223,223,22);
	l2[1]=new Localitate("Bucuresti2",223,223);
	l2[2]=new Municipiu("Teleorman2","Alexandria2",223,223,221);
	l2[3]=new Capitala("Romania2","Bucuresti2",223,223,22);
	l2[4]=NULL;
	
	Localitate **l3;
	l3=new Localitate*[5];
	l3[0]=new Oras("Tara3",323,323,32);
	l3[1]=new Localitate("Bucuresti3",323,323);
	l3[2]=new Municipiu("Teleorman3","Alexandria3",323,323,32);
	l3[3]=new Capitala("Romania3","Bucuresti3",323,323,32);
	l3[4]=NULL;
	
	
	Localitate **l4;
	l4=new Localitate*[5];
	l4[0]=new Oras("Tara4",423,423,42);
	l4[1]=new Localitate("Bucuresti4",423,423);
	l4[2]=new Municipiu("Teleorman4","Alexandria4",423,423,42);
	l4[3]=new Capitala("Romania4","Bucuresti4",423,423,42);
	l4[4]=NULL;
	
	Localitate **l5;
	l5=new Localitate*[5];
	l5[0]=new Oras("Tara5",523,523,52);
	l5[1]=new Localitate("Bucuresti5",523,523);
	l5[2]=new Municipiu("Teleorman5","Alexandria5",523,523,52);
	l5[3]=new Capitala("Romania5","Bucuresti5",523,523,52);
	l5[4]=NULL;
	
	
	Tara **t1;
	t1=new Tara*[5];
	t1[0]=new Tara(l1);
	t1[1]=new Tara(l2);
	t1[2]=new Tara(l3);
	t1[3]=new Tara(l4);
	t1[4]=new Tara(l5);
	
	cout<<"Sortare dupa locuitori\n";
	
	Tara *aux;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){		
			if(t1[i]->getHumans()>t1[j]->getHumans())
			{
				aux=t1[i];
				t1[i]=t1[j];
				t1[j]=aux;	
			}
		}
	}	
	for(int i=0;i<5;i++)
	{
		cout<<"\nTara "<<i<<endl;
		t1[i]->show();
	}
	
		cout<<"\n\n\n\nSortare dupa venit mediu\n";
	
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){		
			if(t1[i]->getMoney()>t1[j]->getMoney())
			{
				aux=t1[i];
				t1[i]=t1[j];
				t1[j]=aux;	
			}
		}
	}	
	for(int i=0;i<5;i++)
	{
		cout<<"\nTara "<<i<<endl;
		t1[i]->show();
	}
	delete[]l1;
	delete[]l2;
	delete[]l3;
	delete[]l4;
	delete[]l5;
	delete[]t1;	
	
	return 0;
}
