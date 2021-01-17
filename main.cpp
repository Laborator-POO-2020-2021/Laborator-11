#include "tara.hpp"

int main()
{
	
	Localitate **v;
	v=new Localitate*[5];
	v[0]=new Localitate("Ghimpati",3500,300);
	v[1]=new Oras(1500,"Bolintin Vale",6000,295);
	v[2]=new Municipiu("Muntenia",200,"Giurgiu",260000,350);
	v[3]=new Capitala("Romania",230,"Bucuresti",2000000,700);
	v[4]=NULL;
	
  
	Tara a(v);
	
	Localitate **v1=new Localitate*[3];
	v1[0]=new Oras(3000,"Antibes",72000,4000);
	v1[1]=new Capitala("Franta",3000,"Paris",2193031,4500);
	v1[2]=NULL;
	

	Tara b(v1);

	
	Localitate **v2=new Localitate*[3];
	v2[0]=new Oras(2500,"Aveiro",78455,6500);
	v2[1]=new Capitala("Portugalia",3500,"Lisabona",564657,6000);
	v2[2]=NULL;
	
 
	Tara c(v2);
	
	
	Localitate **v3=new Localitate*[3];
	v3[0]=new Municipiu("Catalonia",2500,"Barcelona",1608746,4500);
	v3[1]=new Capitala("Spania",2500,"Madrid",3182175,5000);
	v3[2]=NULL;
	

	Tara d(v3);

	
	Localitate **v4=new Localitate*[5];
	v4[0]=new Localitate("Coventry",304200 ,2900);
	v4[1]=new Oras(3000,"Oxford",145000,3000);
	v4[2]=new Municipiu("North West",4000,"Liverpool",800000,3450);
	v4[3]=new Capitala("UK",2700,"Londra",8000000,3000);
	v[4]=NULL;
	

	Tara e(v4);

	
	Tara *t=new Tara[5];
	t[0]=a;
	t[1]=b;
	t[2]=c;
	t[3]=d;
	t[4]=e;
	
	Tara aux;
	
	
	
	for(int i=0;i<4;i++)
	 for(int j=i+1;j<5;j++)
	   if(t[i].getNr()>t[j].getNr())
	   {
	   	 aux=t[i];
	   	 t[i]=t[j];
	   	 t[j]=aux;
	   }
	
	cout<<"Tarile ordonate in ordinea crescatoare a populatiei sunt:\n";
	for(int i=0;i<5;i++)
	  cout<<t[i].getNume()<<endl;
	
	cout<<endl;
	
	for(int i=0;i<4;i++)
	 for(int j=i+1;j<5;j++)
	   if(t[i].getVenit()>t[j].getVenit())
	   {
	   	 aux=t[i];
	   	 t[i]=t[j];
	   	 t[j]=aux;
	   }
	  
	
	for(int i=0;i<5;i++)
	  t[i].afisare();
	  

	  
	delete []t;
	
	delete []v;
	delete []v1;
	delete []v2;
	delete []v3;
	delete []v4;
	 
	
	
	
	return 0;
	
}
