#include "Tara.hpp"

int main() {

 Tara *v = new Tara[5];
   Localitate *L=new Localitate( "Motru",20000 ,5000);
   Localitate *O=new Oras(3000,"Tg-Jiu",20000,4000);
   Localitate *C=new Capitala("Romania",2000,"Bucuresti",35000,4000);
   Localitate *M=new Municipiu("Oltenia",1000,"Tg-Jiu",15000,1000);
   v[0].put(L);
   v[0].put(O);
   v[0].put(C);
   v[0].put(M);
   cout<<"---TARA NR.1---\n"<<endl;
   v[0].afisare();
   
   
   Localitate *L1=new Localitate( "Koln",10000 ,5000);
   Localitate *O1=new Oras(2000,"Munchen",50000,4000);
   Localitate *C1=new Capitala("Germania",2000,"Berlin",80000,4000);
   Localitate *M1=new Municipiu("Bavaria",1400,"Munchen",20000,2500);
   v[1].put(L1);
   v[1].put(O1);
   v[1].put(C1);
   v[1].put(M1);
   cout<<"---TARA NR.2---\n"<<endl;
   v[1].afisare();
   
   Localitate *L2=new Localitate( "Toledo",9000 ,3300);
   Localitate *O2=new Oras(5000,"Barcelona",44000,5500);
   Localitate *C2=new Capitala("Spania",3500,"Madrid",75000,4000);
   Localitate *M2=new Municipiu("Catalonia",1700,"Barcelona",15000,3500);
   v[2].put(L2);
   v[2].put(O2);
   v[2].put(C2);
   v[2].put(M2);
   cout<<"---TARA NR.3---\n"<<endl;
   v[2].afisare();
   
   Localitate *L3=new Localitate( "Nisa",8000 ,2700);
   Localitate *O3=new Oras(5000,"Rennes",48000,6000);
   Localitate *C3=new Capitala("Franta",3000,"Paris",70000,37000);
   Localitate *M3=new Municipiu("Bretania",1500,"Rennes",10000,2000);
   v[3].put(L3);
   v[3].put(O3);
   v[3].put(C3);
   v[3].put(M3);
   cout<<"---TARA NR.4---\n"<<endl;
   v[3].afisare();
   
   
   Localitate *L4=new Localitate( "Stavanger",9000 ,2800);
   Localitate *O4=new Oras(5000,"Bergen",36000,5500);
   Localitate *C4=new Capitala("Norvegia",3500,"Oslo",60000,4000);
   Localitate *M4=new Municipiu("Hordaland",1100,"Bergen",10000,3000);
   v[4].put(L4);
   v[4].put(O4);
   v[4].put(C4);
   v[4].put(M4);
   cout<<"---TARA NR.5---\n"<<endl;
   v[4].afisare();

	Tara temp;
	for(int i=0;i<4;i++)
	for(int j=i;j<5;j++)
	if(v[i].getLoc() < v[j].getLoc())
	{
		temp=v[i];
		v[i]=v[j];
		v[j]=temp;
		
	}
	cout<<"---------------------------------"<<endl;
	cout<<"Sortare dupa numarul de locuitori!\n"<<endl;
	
	for(int i=0;i<5;i++)
{
		cout<<"TARA NR :"<<i+1<<endl;
		cout<<endl;
	v[i].afisare();
}

	Tara aux;
	for(int i=0;i<4;i++)
	for(int j=i;j<5;j++)
	if(v[i].getVenit() < v[j].getVenit())
	{
		aux=v[i];
		v[i]=v[j];
		v[j]=aux;
		
	}
	cout<<"---------------------------------"<<endl;
	cout<<"Sortare dupa venitul mediu!\n"<<endl;
	
	for(int i=0;i<5;i++)
{
		cout<<"TARA NR :"<<i+1<<endl;
		cout<<endl;
	v[i].afisare();
}
	

	return 0;
	
	

}
