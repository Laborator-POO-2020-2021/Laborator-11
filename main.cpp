#include "Tara.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"

int main()
{
	Localitate **loc1 = new Localitate*[5];
	lo1[0] = new Localitate("Jieni", 15000, 1500);
	lo1[1] = new Oras("Breaza", 75000, 2200, 100);
	lo1[2] = new Municipiu("Slatina", 133000, 3000, 250, "Olt");
	lo1[3] = new Capitala("Bucuresti", 2000000, 4000, 300, "Romania");
	lo1[4] = NULL;
	
	Localitate **loc2 = new Localitate*[5];
	lo2[0] = new Localitate("Niigata", 800000, 6000);
	lo2[1] = new Municipiu("Shizuoka", 3600000, 7000, 200, "Chubu");
	lo2[2] = new Capitala("Tokyo", 14000000, 8000, 300, "Japonia");
	lo2[3] = NULL;
	
	Localitate **loc3 = new Localitate*[5];
	lo3[0] = new Capitala("Singapore", 5700000, 10000, 750, "Singapore");
	lo3[1] = NULL;
	
	Localitate **loc4 = new Localitate*[5];
	lo4[0] = new Oras("Karachi", 15000000, 1500, 150);
	lo4[1] = new Capitala("Islamabad", 1000000, 3000, 200, "Pakistan");
	lo4[2] = NULL;
	
	Localitate **loc5 = new Localitate*[5];
	lo5[0] = new Municipiu("Valparaiso", 284000, 3500, 250, "Valparaiso");
	lo5[1] = new Oras("Vina del Mar", 320000, 4000, 200);
	lo5[2] = new Capitala("Santiago", 5220000, 5000, 300, "Chile");
	lo5[3] = NULL;
	
	Tara **tara = new Tara*[5];
	tara[0] = new Tara(loc1);
	tara[1] = new Tara(loc2);
	tara[2] = new Tara(loc3);
	tara[3] = new Tara(loc4);
	tara[4] = new Tara(loc5);
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = i+1; j < 5; j++)
		{
			if(tara[i]->getLocuitori() > tara[j]->getLocuitori())
			{
	 			Tara *aux;
				aux = tara[i];
				tara[i] = tara[j];
				tara[j] = aux;
	 		}
	 	}
	}
	
	cout << "TARILE SORTATE CRESCATOR IN FUNCTIE DE NUMARUL DE LOCUITORI:" << endl << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "NUMAR TOTAL DE LOCUITORI AI TARII :" << tara[i]->getLocuitori()  << endl;
		tara[i]->afisare();
		cout << endl;
	}
	
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = i+1; j < 5; j++)
		{
			if(tara[i]->getVenitMed() > tara[j]->getVenitMed())
			{
	 			Tara *aux;
				aux = tara[i];
				tara[i] = tara[j];
				tara[j] = aux;
	 		}
	 	}
	}
	
	cout << "TARILE SORTATE CRESCATOR IN FUNCTIE DE VENIT MEDIU:" << endl << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "VENITUL MEDIU AL TARII:" << tara[i]->getVenitMed()  << endl;
		tara[i]->afisare();
		cout << endl;
	}
		
	return 0;
}
