#include <iostream>
using namespace std;
#include "tara.hpp"
int main()
{
	Localitate**l = new Localitate*[5];
	l[0] = new Localitate("Bacau",6000,1000);
	l[1] = new Oras("Pitesti",4000,1400,300);
    l[2] = new Municipiu("Constanta",9000,5000,400,"Dobrogea");
	l[3] = new Capitala("Bucuresti",10000,2000,777,"Romania");
	l[4] = NULL;
	Tara*tara = new Tara[5];
	tara[0] = Tara(l);
	tara[0].afisare();
	cout<<tara[0].getLocuitori();
	
	Localitate**l1 = new Localitate*[5];
	l1[0] = new Localitate("Braila",7000,900);
	l1[1] = new Oras("Brasov",3000,1300,500);
    l1[2] = new Municipiu("Galati",8000,2000,300,"Moldova");
	l1[3] = new Capitala("Cluj",9000,3000,999,"Romania1");
	l1[4] = NULL;
	tara[1]=Tara(l1);
	
	Localitate**l2 = new Localitate*[5];
	l2[0] = new Localitate("Buzau",5500,800);
	l2[1] = new Oras("Bran",3300,1500,400);
    l2[2] = new Municipiu("Arad",6000,2200,330,"Banat");
	l2[3] = new Capitala("Sibiu",7000,3200,888,"Romania2");
	l2[4] = NULL;
	tara[2]=Tara(l2);
	
	Localitate**l3 = new Localitate*[5];
	l3[0] = new Localitate("Slatina",5500,770);
	l3[1] = new Oras("Predea;",2000,1200,550);
    l3[2] = new Municipiu("Ploiesti",8080,2020,333,"Oltenia");
	l3[3] = new Capitala("Craiova",4000,3300,555,"Romania3");
	l3[4] = NULL;
	tara[3]=Tara(l3);
	
	Localitate**l4 = new Localitate*[5];
	l4[0] = new Localitate("Suceava",7070,980);
	l4[1] = new Oras("Tulcea",3110,1330,555);
    l4[2] = new Municipiu("Olt",8770,2111,311,"Transilvania");
	l4[3] = new Capitala("Iasi",8888,3111,111,"Romania4");
	l4[4] = NULL;
	tara[4]=Tara(l4);
	cout<<endl;
	cout<<"afisare"<<endl;
	for(int i = 0;i < 5; i++)
	{
		cout<<i<<endl;
		tara[i].afisare();
	}
	
	for(int i = 0; i < 5; i++)
		{for(int j = i+1; j <5; j++)
			if(tara[i].getLocuitori() > tara[j].getLocuitori())
			{
				Tara = aux;
				aux = tara[i];
				tara[i] = tara[j];
				tara[j] = aux;
			}
		}
	
	cout<<"afisare in ordinea locuitorilor:"<<endl;
	for(int i = 0;i < 5; i++)
	{
		cout<<i<<endl;
		tara[i].afisare();
		cout<<endl;
	}

	for(int i = 0;i < 5; i++)
		for(int j =i+1; j < 5;j++)
		{ 
			if(tara[i].getVenit() > tara[j].getVenit() )
			{   Tara = aux;
				aux = tara[i];
				tara[i] = tara[j];
				tara[j] = aux;
			}	
		}
	
	cout<<"afisare in ordinea venitului:"<<endl;
	for(int i = 0;i < 5; i++)
	{
		cout<<i<<endl;
		tara[i].afisare();
		cout<<endl;
	}		
	
	delete[] tara;
	return 0;
}
