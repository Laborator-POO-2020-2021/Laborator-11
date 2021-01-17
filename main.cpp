#include "tara.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"

int main()
{
	/*Capitala c("Atena",600000,200,100,"Grecia");
	c.afisare();
	cout<<endl;
	
	Municipiu m("Bucuresti",2000000,500,200,"Ilfov");
	m.afisare();
	cout<<endl;*/
	
	Tara **tara;
	tara=new Tara*[5];
	
	Localitate **l1, **l2, **l3, **l4, **l5;
	
	l1=new Localitate*[4];
	l1[0]=new Capitala("Bucuresti",20000,450,100,"Romania");
	l1[1]=new Oras("Roma",4000,200,130);
	l1[2]=new Municipiu("Paris",3000,1000,50,"reg1");
	l1[3]=NULL;
	
	l2=new Localitate*[3];
	l2[0]=new Localitate("Madrid",2300,121);
	l2[1]=new Municipiu("Berlin",3000,6000,1400,"reg2");
	l2[2]=NULL;
	
	l3=new Localitate*[4];
	l3[0]=new Capitala("Bucuresti",20000,300,400,"Romania");
	l3[1]=new Oras("Barcelona",4000,200,150);
	l3[2]=new Municipiu("Londra",3000,500,1000,"reg3");
	l3[3]=NULL;
	
	l4=new Localitate*[3];
	l4[0]=new Oras("Mexic",34100,200,340);
	l4[1]=NULL;
	
	l5=new Localitate*[5];
	l5[0]=new Capitala("Berlin",250000,5000,400,"Germania");
	l5[1]=new Oras("New York",40000,25000,150);
	l5[2]=new Localitate("Arad",2900,110);
	l5[3]=new Municipiu("Istanbul",3000,500,1000,"reg5");
	l5[4]=NULL;
	
	tara[0]=new Tara(l1);
	tara[1]=new Tara(l2);
	tara[2]=new Tara(l3);
	tara[3]=new Tara(l4);
	tara[4]=new Tara(l5);
	
	
/*	for(int i=0;i<5;i++)
	{
		tara[i]->afisare();
		cout<<endl;
	}*/
	
	Tara *aux=NULL;
	for(int i=0;i<4;i++)
	for(int j=i+1;j<5;j++)
		if(tara[i]->getLocuitori()>tara[j]->getLocuitori())
		{
			aux=tara[i];
			tara[i]=tara[j];
			tara[j]=aux;
		}
	cout<<"Tarile dupa sortare in functie de numarul de locuitori:"<<endl;
	for(int i=0;i<5;i++)
	{
		tara[i]->afisare();
		cout<<endl;
	}
	


	for(int i=0;i<4;i++)
	for(int j=i+1;j<5;j++)
		if(tara[i]->getVenit()>tara[j]->getVenit())
		{
			aux=tara[i];
			tara[i]=tara[j];
			tara[j]=aux;
		}
	cout<<"Tarile dupa sortare in functie de venit:"<<endl;
	for(int i=0;i<5;i++)
	{
		tara[i]->afisare();
		cout<<endl;
	}

}
