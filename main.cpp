#include "Capitala.hpp"
#include "Municipiu.hpp"
#include "Tara.hpp"

int main()
{
	Localitate **x,**y,**z,**t,**v;
	x=new Localitate*[5];
	x[0]=new Localitate("Focsani",350000,9000);
	x[1]=new Oras("Adjud",15000,3000,4000);
	x[2]=new Municipiu("Marasesti",26000,5000,400,"Vrancea");
	x[3]=new Capitala("Bucuresti",2115000,5000,500,"Romania");
	x[4]=NULL;
	
	y=new Localitate*[5];
	y[0]=new Localitate("Manchester",10000,10000);
	y[1]=new Oras("Liverpool",220000,5000,1000);
	y[2]=new Municipiu("Birmingham",10000,20000,700,"East");
	y[3]=new Capitala("Londra",107000,10000,1000,"Anglia");
	y[4]=NULL;
	
	z=new Localitate*[5];
	z[0]=new Localitate("Dortmund",400000,20000);
	z[1]=new Oras("Munchen",340000,6000,7000);
	z[2]=new Municipiu("Leipzig",36000,10000,500,"East");
	z[3]=new Capitala("Berlin",3107000,20000,2000,"Germania");
	z[4]=NULL;
	
	t=new Localitate*[5];
	t[0]=new Localitate("Lyon",203000,40050);
	t[1]=new Oras("Nantes",34200,6500,7020);
	t[2]=new Municipiu("Bordeaux",36100,10300,700,"East");
	t[3]=new Capitala("Paris",57000,31200,2300,"Franta");
	t[4]=NULL;
	
	v=new Localitate*[5];
	v[0]=new Localitate("Valencia",51300,20150);
	v[1]=new Oras("Bilbao",27150,3540,5120);
	v[2]=new Municipiu("Barcelona",3400,16300,1000,"East");
	v[3]=new Capitala("Madrid",42700,31200,1800,"Spania");
	v[4]=NULL;
	
	Tara **a;
	a=new Tara*[5];
	a[0]=new Tara(x);
	a[1]=new Tara(y);
	a[2]=new Tara(z);
	a[3]=new Tara(t);
	a[4]=new Tara(v);
	
	
	Tara *aux;
	for (int i=0;i<4;i++)
	{
		for (int j=i+1;j<5;j++)
		{
			if(a[i]->getNr_Locuitori_Total() < a[j]->getNr_Locuitori_Total())
			{
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
	
	for (int i=0;i<5;i++)
	{
		cout<<"Numar locuitori total= "<<a[i]->getNr_Locuitori_Total()<<"\n";
		a[i]->afisare();
		cout<<"\n";
	}
	
	
	
	Tara *aux2;
	for (int i=0;i<4;i++)
	{
		for (int j=i+1;j<5;j++)
		{
			if(a[i]->getVenit_Total() < a[j]->getVenit_Total())
			{
				
				aux2=a[i];
				a[i]=a[j];
				a[j]=aux2;
			}
		}
	}
	
	
	for (int i=0;i<5;i++)
	{
		cout<<"Venit total= "<<a[i]->getVenit_Total()<<"\n";
		a[i]->afisare();
		cout<<"\n";
	}
	
	delete []a;
	delete []x;
	delete []y;
	delete []z;
	delete []t;
	delete []v;
	return 1;
}
