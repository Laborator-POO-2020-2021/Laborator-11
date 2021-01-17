#include "Tara.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"

int main(){
	Capitala a("Romania",500,"Bucuresti",2000000,3000);
	//Creare Vectori pentru Tari
	Localitate **a1;
	a1 = new Localitate*[5];
	a1[0] = new Localitate("Aliman",4000,2000);
	a1[1] = new Oras(500,"Tulcea",200000,2500);
	a1[2] = new Municipiu("Muntenia",1000,"Alexandria",300000,2789);
	a1[3] = new Capitala("Romania",500,"Bucuresti",2000000,3000);
	a1[4] = NULL; 
	
	Localitate **a2;
	a2 = new Localitate*[5];
	a2[0] = new Localitate("Ambe",23550, 800);
	a2[1] = new Localitate("Ramo",53770,790);
	a2[2] = NULL; a2[3] = NULL; a2[4] = NULL; 
	
	Localitate **a3;
	a3 = new Localitate*[5];
	a3[0] = new Municipiu("Trumba",2000,"Pero",4300550,5000);
	a3[1] = new Capitala("Trumba",2345,"Cuno",3543526,3000);
	a3[2] = NULL; a3[3] = NULL; a3[4] = NULL; 
	
	Localitate **a4;
	a4 = new Localitate*[5];
	a4[2] = new Localitate("Pistoia", 90205, 5550);
	a4[1] = new Capitala("Italy",3000,"Rome",2873000,4220);
	a4[0] = new Oras(2500,"Milano",1352000,4200);
	a4[3] = NULL; a4[4] = NULL; 
	
	Localitate **a5;
	a5 = new Localitate*[5];
	a5[0] = new Capitala("Vatican",5000,"Vatican",825,5000);
	a5[1] = NULL; a5[2] = NULL; a5[3] = NULL; a5[4] = NULL; 
	
	Tara **t;
	t = new Tara*[5];
	//Initializare Tari
	t[0] = new Tara(a1);
	t[1] = new Tara(a2);
	t[2] = new Tara(a3);
	t[3] = new Tara(a4);
	t[4] = new Tara(a5);
	
	cout<<"Tarile initiale:"<<endl;
	for(int i=0;i<5;i++){
		cout<<"Tara Nr. "<<i+1<<":"<<endl;
		t[i]->afisare();
	}
	cout<<endl<<endl;
	
	//Sortare dupa Numar Locuitori
	Tara *aux;
	
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(t[i]->getNrLoc() < t[j]->getNrLoc()){
				aux = t[i];
				t[i] = t[j];
				t[j] = aux;
			}
		}
	}
	cout<<"Sorare dupa Numar Locuitori:"<<endl<<endl;
	for(int i=0;i<5;i++){
		cout<<"Tara Nr. "<<i+1<<":"<<endl;
		t[i]->afisare();
	}
	
	//Sortare dupa Venit Mediu
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(t[i]->getVenit() < t[j]->getVenit()){
				aux = t[i];
				t[i] = t[j];
				t[j] = aux;
			}
		}
	}
	cout<<endl<<"Sortare dupa Venitul Mediu:"<<endl<<endl;
	for(int i=0;i<5;i++){
		cout<<"Tara Nr. "<<i+1<<":"<<endl;
		t[i]->afisare();
	}
	
	delete []t;
	delete []a1;
	delete []a2;
	delete []a3;
	delete []a4;
	delete []a5;
	
}
