#include "localitate.hpp"
#include "oras.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"
#include <iostream>
using namespace std;

int main()
{
	Localitate **l1, **l2, **l3, **l4, **l5;
	Tara **t = new Tara*[5];
		
	l1 = new Localitate*[5];
	l1[0] = new Municipiu("Severin", 60000, 1000, 200, "Timisoara");
	l1[1] = new Localitate("Tulcea", 20000, 500);
	l1[2] = new Oras("Pitesti", 50000, 750, 250);
	l1[3] = new Capitala("Bucuresti", 80000, 2000, 1200, "Romania");
	l1[4] = NULL;
	t[0] = new Tara(l1);
	//Populatia totala: 210000
	//Venitul mediu total pe tara: 5650 
	
	l2 = new Localitate*[3];
	l2[0] = new Oras("Birmingham", 54000, 2500, 1000);
	l2[1] = new Capitala("Londra", 100000, 4000, 1500, "Anglia");
	l2[2] = NULL;
	t[1] = new Tara(l2);
	//Populatia totala: 154000
	//Venitul mediu total pe tara: 9000
	
	l3 = new Localitate*[3];
	l3[0] = new Municipiu("Arequipa", 12450, 500, 0, "Trujillo");
	l3[1] = new Capitala("Lima", 40000, 1000, 500, "Peru");
	l3[2] = NULL;
	t[2] = new Tara(l3);
	//Populatia totala: 52450
	//Venitul mediu total pe tara: 2000
	
	l4 = new Localitate*[3];
	l4[0] = new Localitate("Valcea", 22000, 1750);
	l4[1] = new Oras("Cluj-Napoca", 35000, 3500, 1500);
	l4[2] = NULL;
	t[3] = new Tara(l4);
	//Populatia totala: 57000
	//Venitul mediu total pe tara: 6750
	
	l5 = new Localitate*[4];
	l5[0] = new Oras("Rotterdam", 54000, 3000, 1200);
	l5[1] = new Capitala("Amsterdam", 85000, 8000, 2000, "Olanda");
	l5[2] = new Municipiu("Haga", 52000, 2800, 2000, "Haga");
	l5[3] = NULL;
	t[4] = new Tara(l5);
	//Populatia totala: 191000
	//Venitul mediu total pe tara: 19000
	
	cout << "...Afisarea tarilor in conditiile intiale..." << endl << endl;
	for (int i=0; i<5; i++)
	{
		cout << "Tara " << i+1 << ":" << endl;
		t[i]->afisare();
	}
	
	cout << "...Sortarea tarilor crescator dupa numarul de locuitori si afisare..." << endl << endl;
	Tara* aux;
	for (int i=0; i<4; i++)
	{
	    for (int j=i+1; j<5; j++)
	        if (t[i]->getLoc() > t[j]->getLoc())
	        {
		        aux = t[i];
		        t[i] = t[j];
		        t[j] = aux;
	        }	
	}
	for (int i=0; i<5; i++)
	    t[i]->afisare();
	
	cout << "...Sortarea tarilor descrescator dupa venitul total mediu pe tara..." << endl << endl;
	for (int i=0; i<4; i++)
	{
	    for (int j=i+1; j<5; j++)
	        if (t[i]->getVenit() < t[j]->getVenit())
	        {
		        aux = t[i];
		        t[i] = t[j];
		        t[j] = aux;
	        }	
	}
	for (int i=0; i<5; i++)
	    t[i]->afisare();
	
	delete []l1;
	delete []l2;
	delete []l3;
	delete []l4;
	delete []l5;
	delete []t;
	return 0;
}
