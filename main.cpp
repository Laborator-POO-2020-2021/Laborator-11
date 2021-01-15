#include <iostream>
#include"Localitate.hpp"
#include"Oras.hpp"
#include"Municipiu.hpp"
#include"Capitala.hpp"
#include"Tara.hpp"
#include<string.h>
using namespace std;


int main() 
{
	Localitate* obj_localitate = new Localitate("Sibiu",100,1000);
	
	Oras* obj_oras = new Oras(1000,130,123,"Oradea");
	
	Municipiu* obj_municipiu = new Municipiu("Banat",1200,200,340,"Timisoara");
	
	Capitala* obj_capitala = new Capitala("Romania",1300,500,800,"Bucuresti");	
	Capitala* obj_capitala_2 = new Capitala("Spain",1500,800,2000,"Madrid");
	Capitala* obj_capitala_3 = new Capitala("Germany",1800,300,3000,"Berlin");
	Capitala* obj_capitala_4 = new Capitala("England",1400,200,3000,"London");
	
	Tara *Spania,*Germania,*Anglia,*Romania,*Random;
	Tara** Lista;
	Spania = new Tara;
	Germania = new Tara;
	Anglia = new Tara;
	Romania = new Tara;
	Random = new Tara;
	
	//cout<<"Afisez tara Random"<<endl;
	Random->add_object(obj_localitate);
	Random->add_object(obj_oras);
	Random->add_object(obj_municipiu);
	Random->add_object(obj_capitala);
	
	Romania->add_object(obj_capitala);
	Spania->add_object(obj_capitala_2);
	Germania->add_object(obj_capitala_3);
	Anglia->add_object(obj_capitala_4);
	
	
	Lista = new Tara*[5];
	Lista[0] = Random;
	Lista[1] = Romania;
	Lista[2] = Spania;
	Lista[3] = Germania;
	Lista[4] = Anglia;
	
	Tara* aux = NULL;
	
	// SORTEZ DUPA NUMARUL DE LOCUITORI
	cout<<"Sortez dupa numarul de locuitori."<<endl<<endl;
	for(int i = 0;i<5;i++)
	{
		for(int j = i+1;j<5;j++)
		{
			if(Lista[i]->get_locuitori() > Lista[j]->get_locuitori())
			{
				aux = Lista[i];
				Lista[i] = Lista[j];
				Lista[j] = aux;
			}
		}
	}
	
	// AFISEZ TARA "RANDOM" VA FI A DOUA TARA
	
	for(int i = 0;i<5;i++)
	{
		Lista[i]->afisare();
		cout<<endl;
	}
	
	// SORTEZ DUPA VENITUL MEDIU
	
		cout<<"Sortez dupa venitul mediu."<<endl<<endl;
	for(int i = 0;i<5;i++)
	{
		for(int j = i+1;j<5;j++)
		{
			if(Lista[i]->get_venit() > Lista[j]->get_venit())
			{
				aux = Lista[i];
				Lista[i] = Lista[j];
				Lista[j] = aux;
			}
		}
	}
	
	// AFISEZ TARA "RANDOM" VA FI ULTIMA DATORITA BONUSURILOR SI VENITURILOR MEDII DIN FIECARE OBIECT
	
	for(int i = 0;i<5;i++)
	{
		Lista[i]->afisare();
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	return 1;
}
