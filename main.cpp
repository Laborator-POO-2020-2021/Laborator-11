#include "Localitate.hpp"
#include "Oras.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Tara.hpp"


int main()
{
    
    Localitate **v,**v1,**v2,**v3,**v4;
    Tara **x;
    v=new Localitate*[5];
    v[0]=new Localitate("Basarabi",30,7);
    v[1]=new Oras("Calafat",150,20,3);
    v[2]=new Municipiu("Craiova",1000,30,4,"Oltenia");
    v[3]=new Capitala("Bucuresti",10000,50,5,"Romania");
    v[4]=NULL;
    
    x=new Tara*[5];
    
	
	v1=new Localitate*[4];
	v1[0]=new Localitate("Caransebes",50,7);
    v1[1]=new Oras("Resita",180,25,4);
    v1[2]=new Municipiu("Timisoara",2000,35,7,"Banat");
    v1[3]=NULL;
    
    v2=new Localitate*[3];
	v2[0]=new Oras("Mioveni",40,8,2);
    v2[1]=new Municipiu("Pitesti",190,35,5,"Muntenia");
    v2[2]=NULL;
    
    v3=new Localitate*[3];
	v3[0]=new Oras("Beius",43,6,3);
    v3[1]=new Municipiu("Oradea",200,45,6,"Banat");
    v3[2]=NULL;
    
    v4=new Localitate*[3];
	v4[0]=new Oras("Tecuci",33,6,3);
    v4[1]=new Municipiu("Focsani",170,37,3,"Moldova");
    v4[2]=NULL;
    
	
	x[0]=new Tara(v);
	x[1]=new Tara(v1);
	x[2]=new Tara(v2);
	x[3]=new Tara(v3);
	x[4]=new Tara(v4);
    
    /*
    for(int k=0;k<5;k++)
        {
            x[k]->afisare();
            cout<<endl;
        }
    */
    
    //cout<<x[0]->populatie();
	
	Tara *aux;
	for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++)
			if(x[i]->populatie()>x[j]->populatie()){
				aux=x[i];
				x[i]=x[j];
				x[j]=aux;
			}
	
	//Pentru afisare am folosit metoda virtuala, pentru a afisa toate campurile
	for(int i=0;i<5;i++){
		x[i]->afisare();
		cout<<x[i]->populatie(); //pentru a se observa mai usor corectitudinea sortarii
		cout<<"\n";
	}
	
	
	for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++)
			if(x[i]->venit_mediu()>x[j]->venit_mediu()){
				aux=x[i];
				x[i]=x[j];
				x[j]=aux;
			}
	
	cout<<endl;
	for(int i=0;i<5;i++){
		x[i]->afisare();
		cout<<x[i]->venit_mediu(); //pentru a se observa mai usor corectitudinea sortarii; am inclus si bonusul prin folosirea metodei virtuale
		cout<<"\n";
	}
	/*
	Localitate **h;
	h=new Localitate*[3];
	h[0]=new Oras("Calafat",15000,200,5);
	h[0]->afisare();
	*/
	
	delete []x;
	return 0;
}
