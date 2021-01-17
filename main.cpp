#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

int main()
{
	int n=5;//nr. tari
    Localitate **v1,**v2,**v3,**v4,**v5;
    //venitul mediu net in RON
    v1=new Localitate*[5];
    v1[0]=new Localitate("Turda",1260,800);
    v1[1]=new Oras(300,"Azuga",4600,2500);
    v1[2]=new Municipiu("Cluj", 400, "Cluj-Napoca",350900,3500);
    v1[3]=new Capitala("Romania", 400, "Bucuresti",1890000,3900);
    v1[4]=NULL;
	
	v2=new Localitate*[5];
	v2[0]=new Localitate("Altwarp",700,3000);
    v2[1]=new Oras(800,"Duisburg",500000,7500);
    v2[2]=new Municipiu("Bavaria",2000, "Munchen",1470000,11000);
    v2[3]=new Capitala("Germania", 3000, "Berlin",3690000,13000);
    v2[4]=NULL;
    
    v3=new Localitate*[5];
	v3[0]=new Localitate("Woodstock",2900,4000);
    v3[1]=new Oras(600,"Sheffield",450000,5500);
    v3[2]=new Municipiu("Tara Galilor",1000, "Cardiff",305000,7700);
    v3[3]=new Capitala("UK", 6000, "Londra",7500000,15000);
    v3[4]=NULL;
    
    v4=new Localitate*[5];
	v4[0]=new Localitate("Ponga",600,2100);
    v4[1]=new Oras(300,"Granada",250000,3500);
    v4[2]=new Municipiu("Aragon",2000, "Zaragoza",667000,6000);
    v4[3]=new Capitala("Spania", 3000, "Madrid",3190000,10500);
    v4[4]=NULL;
    
    v5=new Localitate*[5];
	v5[0]=new Localitate("Conques",700,2800);
    v5[1]=new Oras(800,"Verdun",18510,4000);
    v5[2]=new Municipiu("Provence", 2700, "Marseille",890000,8000);
    v5[3]=new Capitala("Franta", 5000, "Paris",2150000,14000);
    v5[4]=NULL;
    
	Tara **tara = new Tara*[n];
	tara[0]=new Tara(v1);
	tara[1]=new Tara(v2);
	tara[2]=new Tara(v3);
	tara[3]=new Tara(v4);
	tara[4]=new Tara(v5);
	
	//pentru afisare si determinarea venitului mediu am folosit metode virtuale
	Tara *aux; 

	cout<< "--------------Sortare crescatoare dupa nr. locuitori------------------ "<<endl<<endl;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(tara[i]->getNrLocuitori()>tara[j]->getNrLocuitori()){
				aux=tara[i];
				tara[i]=tara[j];
				tara[j]=aux;
			}
	
	for(int i=0;i<n;i++){
		cout<<"Tara "<<i+1<<"(nr. total de locuitori: "<<tara[i]->getNrLocuitori()<<"):"<<endl<<endl;
		tara[i]->afisare();
		cout<<endl;
	}
	
	cout<< "----------------Sortare crescatoare dupa venitul mediu---------------------- "<<endl<<endl;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(tara[i]->getVenit()>tara[j]->getVenit()){
				aux=tara[i];
				tara[i]=tara[j];
				tara[j]=aux;
			}
	
	for(int i=0;i<n;i++){
		cout<<"Tara "<<i+1<<"(venit total: "<<tara[i]->getVenit()<<"):"<<endl<<endl;
		tara[i]->afisare();
		cout<<endl;
	}
	
	delete []v1, v2, v3, v4, v5;
	delete []tara;
	return 0;
}
