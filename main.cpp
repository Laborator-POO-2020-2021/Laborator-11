#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Tara.hpp"

int main()
{
	Localitate **v1;
	
	v1=new Localitate*[5];
	
	v1[0]=new Localitate("Morunglav",1000,100);
	v1[1]=new Oras("Bals",30000,30000,10000);
	v1[2]=new Municipiu("Slatina",100000,65000,15000,"Olt");
	v1[3]=new Capitala("Bucuresti",1000000,100000,50000,"Romania");
	
	Localitate **v2;
	
	v2=new Localitate*[5];
	
	v2[0]=new Localitate("Walbourg",5000,200);
	v2[1]=new Oras("Bischwiller",30000,30000,10000);
	v2[2]=new Municipiu("Haguenau",100000,65000,15000,"Grand Est");
	v2[3]=new Capitala("Paris",1000000,100000,50000,"France");
	
	Localitate **v3;
	
	v3=new Localitate*[5];
	
	v3[0]=new Localitate("Romean",100,300);
	v3[1]=new Oras("Vilalba",30000,30000,10000);
	v3[2]=new Municipiu("Lugo",100000,65000,15000,"Galicia");
	v3[3]=new Capitala("Madrid",1000000,100000,50000,"Spain");
	
	Localitate **v4;
	
	v4=new Localitate*[5];
	
	v4[0]=new Localitate("Noyon",2500,400);
	v4[1]=new Oras("Dalanzadgad",30000,30000,10000);
	v4[2]=new Municipiu("GobiGurvanSaikhan",100000,65000,15000,"Omongobi");
	v4[3]=new Capitala("Ulaanbaatar",1000000,100000,50000,"Mongolia");
	
	Localitate **v5;
	
	v5=new Localitate*[5];
	
	v5[0]=new Localitate("Manelao",4000,500);
	v5[1]=new Oras("Parauapebas",30000,30000,10000);
	v5[2]=new Municipiu("Maraba",100000,65000,15000,"Para");
	v5[3]=new Capitala("Brasilia",1000000,100000,50000,"Brazilia");
	
	Tara obj1(v1),obj2(v2),obj3(v3),obj4(v4),obj5(v5);
	
	Tara **w,*aux;
	
	w=new Tara*[5];
	
	w[0]=&obj1;
	w[1]=&obj2;
	w[2]=&obj3;
	w[3]=&obj4;
	w[4]=&obj5;



	//Sortare dupa numarul de locuitori
	cout<<"Sortare dupa numarul de locuitori:"<<endl;
	for(int i=0; i<4; i++)
		for(int j=i+1; j<5; j++)
			if( w[i]->getNr() > w[j]->getNr() )
				{
					aux=w[i];
					w[i]=w[j];
					w[j]=aux;
				}
				
	for(int i=0; i<5; i++)
		{
			cout<<"----------------------------------------------"<<endl;
			w[i]->afisare();
			cout<<"----------------------------------------------"<<endl;
			cout<<endl<<endl<<endl<<endl;
		}

	

	//Sortare dupa venitul mediu
	cout<<"Sortare dupa venitul mediu:"<<endl;
	for(int i=0; i<4; i++)
		for(int j=i+1; j<5; j++)
			if( w[i]->getVnt() > w[j]->getVnt() )
				{
					aux=w[i];
					w[i]=w[j];
					w[j]=aux;
				}

	for(int i=0; i<5; i++)
		{
			cout<<"----------------------------------------------"<<endl;
			w[i]->afisare();
			cout<<"----------------------------------------------"<<endl;
			cout<<endl<<endl<<endl<<endl;
		}

	return 0;
}
