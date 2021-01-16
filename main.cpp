#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

int main() 
{
	Localitate **v1 = new Localitate*[5];
	
	v1[0] = new Localitate("Tecuci", 15000, 400);
	v1[1] = new Oras("Sibiu", 30000, 800, 50);
	v1[2] = new Municipiu("Alba Iulia", 24000, 265, 100, "Transilvania");
	 
	Localitate **v2 = new Localitate*[3];
	v2[0] = new Oras("Londra", 5400, 800, 420);
	v2[1] = new Capitala("Roma", 25000, 1000, 250, "Italia");
	v2[2] = new Localitate("Oradea", 8000, 120);
	
	Localitate **v3 = new Localitate*[3];
	v3[0] = new Capitala("Berna", 5000, 1200, 80, "Elvetia");
	v3[1] = new Localitate("Brasov", 8700, 500);
	v3[2] = new Oras("Ploiesti", 4500, 750, 35);
	
	Localitate **v4 = new Localitate*[3];
	v4[0] = new Capitala("Ankara", 5700, 45, 15, "Turcia");
	v4[1] = new Municipiu("Bucuresti", 4500, 800, 80, "Muntenia");
	v4[2] = new Oras("Zurich", 1400, 1000, 450);
	
	Localitate **v5 = new Localitate*[3];
	v5[0] = new Localitate("Arad", 4800, 500);
	v5[1] = new Localitate("Bistrita", 5000, 200);
	v5[2] = new Oras("Mangalia", 4000, 520, 180);
	
	Tara obj1(v1), obj2(v2), obj3(v3), obj4(v4), obj5(v5);
	Tara **a = new Tara*[5];
	a[0] = &obj1;
	a[1] = &obj2;
	a[2] = &obj3;
	a[3] = &obj4;
	a[4] = &obj5;
	
	/*sortari*/
		
	Tara *temp;
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
			if (a[i]->NrLocuitori() > a[j] -> NrLocuitori())
			{
				
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	
	
	cout << "SORTARE DUPA LOCUITORI:" << endl << endl << endl << endl;
	for (int i = 0; i < 5; i++)
		a[i] -> afisare();
		
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
			if (a[i]->getVenitTotal() > a[j] -> getVenitTotal())
			{
				
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	
	
	cout << "SORTARE DUPA VENIT:" << endl << endl << endl << endl;
	
	for (int i = 0; i < 5; i++)
		a[i] -> afisare();
		
	return 0;
}
