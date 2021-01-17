#include "tara.hpp"
#include "localitate.hpp"
#include "oras.hpp"
#include "capitala.hpp"
#include "municipiu.hpp"

int main()
{
	Tara **v;
	v = new Tara*[5];
	
	Localitate **v0, **v1, **v2, **v3, **v4;
	v0 = new Localitate*[5];
	v1 = new Localitate*[5];
	v2 = new Localitate*[5];
	v3 = new Localitate*[5];
	v4 = new Localitate*[5];
	
	v0[0] = new Localitate("Mihailesti", 100, 150);
	v0[1] = new Oras(100, "Giurgiu", 250, 160);
	v0[2] = new Municipiu("Timis", 15, "Timisoara", 350, 170);
	v0[3] = new Capitala("Romania", 20, "Bucuresti", 300, 180);
	v0[4] = NULL;
	
	v1[0] = new Localitate("Sabac", 1002, 1502);
	v1[1] = new Oras(102, "Nis", 2502, 1602);
	v1[2] = new Municipiu("Novi", 152, "Sad", 90000, 1702);
	v1[3] = new Capitala("Serbia", 202, "Belgrad", 3502, 1802);
	v1[4] = NULL;
	
	v2[0] = new Localitate("Ruse", 1001, 1501);
	v2[1] = new Oras(101, "Varna", 2501, 1601);
	v2[2] = new Municipiu("Shumen", 151, "Han", 3001, 1701);
	v2[3] = new Capitala("Bulgaria", 201, "Sofia", 4000, 1801);
	v2[4] = NULL;
	
	v3[0] = new Localitate("Rouen", 1003, 1503);
	v3[1] = new Oras(103, "Nantes", 2503, 1603);
	v3[2] = new Municipiu("Coasta", 153, "Azur", 3003, 1703);
	v3[3] = new Capitala("Franta", 203, "Paris", 7000, 1803);
	v3[4] = NULL;
	
	v4[0] = new Localitate("Bilbao", 1004, 1504);
	v4[1] = new Oras(104, "Valencia", 2504, 1604);
	v4[2] = new Municipiu("Valencia", 154, "Torrent", 3900, 1704);
	v4[3] = new Capitala("Spania", 204, "Madrid", 3504, 1804);
	v4[4] = NULL;
	
	//SE POPULEAZA TARILE
	v[0] = new Tara(v0);
	v[1] = new Tara(v1);
	v[2] = new Tara(v2);
	v[3] = new Tara(v3);
	v[4] = new Tara(v4);
		
	//SORTARE IN FUNCTIE DE NR LOCUITORI
	Tara *k;
	for(int i = 0; i < 4; i++)
		for(int j = i + 1; j < 5; j++)
		{
			if(v[i]->locuitori() > v[j]->locuitori())
			{
				k = v[i];
				v[i] = v[j];
				v[j] = k;
			}
		}
	
	//AFISARE
	for(int i = 0; i < 5; i++)
	{
		v[i]->afisare();
	}
		
	//SORTARE IN FUNCTIE DE VENIT_MEDIU	
	for(int i = 0; i < 4; i++)
		for(int j = i + 1; j < 5; j++)
		{
			if(v[i]->Ven() > v[j]->Ven())
			{
				k = v[i];
				v[i] = v[j];
				v[j] = k;
			}
		}

	//AFISARE
	for(int i = 0; i < 5; i++)
	{
		v[i]->afisare();
	}

	delete []v0;
	delete []v1;
	delete []v2;
	delete []v3;
	delete []v4;
	delete []v;

	return 0;
}

