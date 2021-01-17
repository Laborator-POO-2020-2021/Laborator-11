#include "tara.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"

int main()
{
	Tara **t = new Tara*[5];
	
	Localitate **l1 = new Localitate*[5];
	
	l1[0] = new Localitate("Crucea", 10000, 2000);
	l1[1] = new Oras(3000, "Constanta", 1500, 3500);
	l1[2] = new Municipiu("Dobrogea", 4000, "Tulcea", 155000, 4500);
	l1[3] = new Capitala("Romania", 5000, "Bucuresti", 1000000, 5000);
	l1[4] = NULL;
	
	t[0] = new Tara(l1);
	
	Localitate **l2 = new Localitate*[5];  
	
	l2[0] = new Localitate("Birmingam", 25000, 500);
	l2[1] = new Capitala("UK", 5500, "Londra", 10000000, 6000);
	l2[2] = NULL; 
	l2[3] = NULL; 
	l2[4] = NULL; 
	
	t[1] = new Tara(l2);
	
	Localitate **l3 = new Localitate*[5];
	
	l3[0] = new Localitate("Carlet", 3000, 1500);
	l3[1] = new Capitala("Spania", 2000,"Madrid", 330000, 4550);
	l3[2] = new Oras(1550, "Barcelona", 125000, 4500);
	l3[3] = NULL; 
	l3[4] = NULL; 
	
	t[2] = new Tara(l3);
	
	Localitate **l4 = new Localitate*[5];
	
	l4[0] = new Oras(1200, "Milano", 100000, 5500);
	l4[1] = new Capitala("Italia", 2200, "Roma", 625000, 5500);
	l4[2] = NULL; 
	l4[3] = NULL; 
	l4[4] = NULL; 
	
	t[3] = new Tara(l4);
	
	Localitate **l5 = new Localitate*[5];
	
	l5[0] = new Capitala("Rusia", 4000, "Moscova", 50000000, 5000);
	l5[1] = NULL; 
	l5[2] = NULL; 
	l5[3] = NULL; 
	l5[4] = NULL; 
	
	t[4] = new Tara(l5);
	
	cout << "Tarile sunt: "<< endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "Tara " << i + 1 << " : " << endl << endl;
		t[i]->afisare();
	}
	cout << endl << endl;
	

	for(int i = 0; i < 4; i++)
	{
		for(int j = i + 1; j < 5; j++)
		{
			if(t[i]->getNrLoc() < t[j]->getNrLoc())
			{
				Tara *aux;
				
				aux = t[i];
				t[i] = t[j];
				t[j] = aux;
			}
		}
	}
	
	cout << "################Sortarea tarilor dupa numarul de locuitori##############" << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "Tara " << i + 1 << " : " << endl << endl;
		t[i]->afisare();
	}
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = i + 1; j < 5; j++)
		{
			if(t[i]->getVenit() < t[j]->getVenit())
			{
				Tara *aux;
				
				aux = t[i];
				t[i] = t[j];
				t[j] = aux;
			}
		}
	}
	
	cout << endl << endl;
	cout << "################Sortarea tarilor dupa venit###############" << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "Tara " << i + 1 << " : " << endl << endl;
		t[i]->afisare();
		cout << endl;
	}
	
	
	return 1;
}
