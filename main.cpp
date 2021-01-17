#include "tara.hpp"



int main()
{
	//Capitala obj("flamanda",60,90,100,"FLAMANZENI");
	//obj.afisare();
	Localitate**v=new Localitate*[5];
	v[0]=new Localitate("Buzau",4000,1500);
	v[1]=new Oras("Brasov",400,500,3000);
	v[2]=new Municipiu("Sibiu",400,500,400,"Flamanda");
	v[3]=new Capitala("Sibiu",400,500,300,"Flamanzeni");
	v[4]=NULL;
	Tara*vector=new Tara[5];
	vector[0]=Tara(v);
	vector[0].afisare();
//cout<<vector[0].getVenit();
cout<<vector[0].getLocuitori();
	
	Localitate**v1=new Localitate*[5];
	v1[0]=new Localitate("localitate",4000,1500);
	v1[1]=new Oras("oras",500,600,3000);
	v1[2]=new Municipiu("municipiu",700,800,900,"Flamanda1");
	v1[3]=new Capitala("cpaitala",100,200,300,"Flamanzeni1");
	v1[4]=NULL;
	vector[1]=Tara(v1);
	
		Localitate**v2=new Localitate*[5];
	v2[0]=new Localitate("localitate1",1000,2500);
	v2[1]=new Oras("oras1",100,200,4000);
	v2[2]=new Municipiu("municipiu1",800,900,100,"Flamanda2");
	v2[3]=new Capitala("cpaitala1",300,400,500,"Flamanzeni2");
	v2[4]=NULL;
	vector[2]=Tara(v2);
	
		Localitate**v3=new Localitate*[5];
	v3[0]=new Localitate("localitate2",2000,3500);
	v3[1]=new Oras("oras2",200,300,5000);
	v3[2]=new Municipiu("municipiu2",900,1000,1100,"Flamanda3");
	v3[3]=new Capitala("cpaitala2",3000,4000,5000,"Flamanzeni3");
	v3[4]=NULL;
	vector[3]=Tara(v3);
	
		Localitate**v4=new Localitate*[5];
	v4[0]=new Localitate("localitate3",30000,3700);
	v4[1]=new Oras("oras3",100,700,8000);
	v4[2]=new Municipiu("municipiu3",1000,1100,1200,"Flamanda4");
	v4[3]=new Capitala("cpaitala3",4000,5000,6000,"Flamanzeni4");
	v4[4]=NULL;
	vector[4]=Tara(v4);
	
		cout<<endl;
		cout<<"===================================afisare=======================================";
		cout<<endl;	
		for(int i=0;i<5;i++)
	{
			cout<<"========"<<i<<"==============="<<endl;
		vector[i].afisare();}
	

	
	
	for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++)
		{
			if(vector[i].getLocuitori()>vector[j].getLocuitori())
			{
				Tara aux;
				aux=vector[i];
				vector[i]=vector[j];
				vector[j]=aux;
				
			}
			
			
		}
		
		cout<<"=============================================================afisare dupa sortare in functie de nr locuitori========================================================";
		for(int i=0;i<5;i++)
	{
			cout<<"========"<<i<<"==============="<<endl;
		vector[i].afisare();
		cout<<endl;
		}
		
			for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++)
		{
			if(vector[i].getVenit()>vector[j].getVenit())
			{
				Tara aux;
				aux=vector[i];
				vector[i]=vector[j];
				vector[j]=aux;
				
			}}
			
		
			cout<<"=============================================================afisare dupa sortare in functie de venit========================================================";
		for(int i=0;i<5;i++)
	{
			cout<<"========"<<i<<"==============="<<endl;
		vector[i].afisare();
		cout<<endl;
		}
		
		
		
		delete[] vector;
		
	return 0;
}
