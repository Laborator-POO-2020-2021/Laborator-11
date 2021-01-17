#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

int main()
{
	Oras obj1=Oras("Tokyo",9000000,500000,100000);
	Municipiu obj2=Municipiu("Bristol",467000,6500,1000,"Bristol");
	Capitala obj3=Capitala("Bucuresti",1830000,3000,1000,"Romania");
	obj1.afisare();
	cout<<endl;
	obj2.afisare();
	cout<<endl;
	obj3.afisare();
	cout<<endl;
	
	Localitate**v=new Localitate*[5];
    v[0]=new Localitate("Paris",3000000,5000);
    v[1]=new Oras("Madrid",2000000,4000,3500);
    v[2]=new Municipiu("Londra",8900000,9500,2500,"Londra");
    v[3]=new Capitala("Berlin",36450500,6400,1600,"Germania");
    v[4]=NULL;
    
    Tara*vector=new Tara[5];
	vector[0]=Tara(v);
	
	Localitate**v1=new Localitate*[5];
	v1[0]=new Localitate("Chitila",35000,1500);
	v1[1]=new Oras("Amsterdam",5650000,6900,4200);
	v1[2]=new Municipiu("Roma",66666666,6666,6666,"Roma");
	v1[3]=new Capitala("Cairo",4563000,22700,3200,"Egipt");
	v1[4]=NULL;
	vector[1]=Tara(v1);
	
	Localitate**v2=new Localitate*[5];
	v2[0]=new Localitate("Halesowen",2000,1500);
	v2[1]=new Oras("Buckfastleigh",300,500,6000);
	v2[2]=new Municipiu("Bideford",8700,8900,1000,"Bideford");
	v2[3]=new Capitala("Stonehouse",36400,41300,43500,"UK");
	v2[4]=NULL;
	vector[2]=Tara(v2);

	Localitate**v3=new Localitate*[5];
	v3[0]=new Localitate("Winsford",223000,33500);
	v3[1]=new Oras("Crosby",25700,73600,57000);
	v3[2]=new Municipiu("Norwich",9708,800,4100,"Chippenham");
	v3[3]=new Capitala("Bosworth",35000,24000,55000,"Wareham");
	v3[4]=NULL;
	vector[3]=Tara(v3);

	Localitate**v4=new Localitate*[5];
	v4[0]=new Localitate("South Brent",38000,3970);
	v4[1]=new Oras("Fordwich",14300,73200,8500);
	v4[2]=new Municipiu("Eastbourne",182500,110320,143200,"Godalming");
	v4[3]=new Capitala("Bath",893000,483000,384000,"Dereham");
	v4[4]=NULL;
	vector[4]=Tara(v4);
	
	for(int i=0;i<5;i++){
	cout<<"Tara"<<i<<": "<<endl;
	vector[i].afisare();
	cout<<endl;
	}
	Tara aux;
	
	cout<<"=====Sortare dupa locuitori===================================================================================="<<endl;
	for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++)
			{if(vector[i].Locuitori()>vector[j].Locuitori())
				{
				aux=vector[i];
				vector[i]=vector[j];
				vector[j]=aux;				
				}			
		}
	
		
	for(int i=0;i<5;i++){
			cout<<"Tara"<<i<<": "<<endl;
		vector[i].afisare();
		cout<<endl;
	}

	cout<<"=====Sortare dupa venitul mediu===================================================================================="<<endl;
	for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++){
			if(vector[i].getVenit_mediu()>vector[j].getVenit_mediu())
			{
			aux=vector[i];
			vector[i]=vector[j];
			vector[j]=aux;
			}
		}
	
		
	for(int i=0;i<5;i++){
		cout<<"Tara"<<i<<": "<<endl;
		vector[i].afisare();
		cout<<endl;
	}
		
		
		
	delete[] vector;
		
	return 0;
}
