//Antohi Sorin 324AB

#include "municipiu.h"
#include "capitala.h"
#include "tara.h"

int main()
{
	Localitate **l1,**l2,**l3,**l4,**l5;
	l1=new Localitate*[3];
	l1[0]=new Localitate("Cahul",80000,2000);
	l1[1]=new Municipiu("Voluntari",100000,2500,500,"Bucuresti");
	l1[2]=NULL;
	
	l2=new Localitate*[5];
	l2[0]=new Localitate("Kiel",80000,7500);
	l2[1]=new Oras("Frankfurt am Main",800000,8500,1500);
	l2[2]=new Municipiu("Munchen",650000,8000,500,"Bavaria");
	l2[3]=new Capitala("Berlin",1000000,8500,1000,"Germania");
	l2[4]=NULL;
	
	l3=new Localitate*[4];
	l3[0]=new Localitate("Timisoara",90000,2500);
	l3[1]=new Oras("Buzau",40000,1800,150);
	l3[2]=new Capitala("Bucuresti",1500000,2700,250,"Romania");
	l3[3]=NULL;
	
	l4=new Localitate*[4];
	l4[0]=new Localitate("Nantes",250000,6000);
	l4[1]=new Oras("Bordeaux",150000,7000,1000);
	l4[2]=new Municipiu("Paris",2100000,8000,1000,"Ile-de-France");
	l4[3]=NULL;
	
	l5=new Localitate*[5];
	l5[0]=new Localitate("Krasnodar",45000,4500);
	l5[1]=new Oras("Vladivostok",40000,4000,200);
	l5[2]=new Municipiu("St. Petersburg",5000000,5500,500,"Rusia Baltica");
	l5[3]=new Capitala("Moscova",12000000,7000,1000,"Rusia");
	l5[4]=NULL;
	
	Tara **a;
	a=new Tara*[5];
	a[0]=new Tara(l1);
	a[1]=new Tara(l2);
	a[2]=new Tara(l3);
	a[3]=new Tara(l4);
	a[4]=new Tara(l5);
	
	cout << "******Afisarea tarilor initiale******\n";
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n" <<  (i+1)<<"Tara";
		a[i]->afisare();
	}
	Tara *aux;
	for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++)
		if(a[i]->locuitori()<a[j]->locuitori())
		{
			aux=a[i];
			a[i]=a[j];
			a[j]=aux;	
		}
	cout << "\n\n******Afisarea tarilor dupa ce am facut sortarea in functie de numarul de locuitori******";
	for(int i=0;i<5;i++)
		{
		cout<<"\n\n" <<  (i+1)<<"Tara";
		a[i]->afisare();
		}
	for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++)
		if(a[i]->venit()>a[j]->venit())
		{
			aux=a[i];
			a[i]=a[j];
			a[j]=aux;	
		}
	cout << "\n\n******Afisarea tarilor dupa ce am facut sortarea in functie de venitul mediu******";
	for(int i=0;i<5;i++)
		{
		cout<<"\n\n" <<  (i+1)<<"Tara";
		a[i]->afisare();
		}
	delete[]l1;
	delete[]l2;
	delete[]l3;
	delete[]l4;
	delete[]l5;
	delete[]a;
		return 1;
}
