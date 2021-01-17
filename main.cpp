#include "Tara.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"

int main()
{
	Localitate **lo1 = new Localitate*[5];
	lo1[0] = new Localitate("Slobozia", 45891, 3000);
	lo1[1] = new Oras(20, "Iasi", 793559, 4000);
	lo1[2] = new Municipiu("Transilvania", 30, "Cluj-Napoca", 706905, 5000);
	lo1[3] = new Capitala("Romania", 30, "Bucuresti", 1830000, 6000);
	lo1[4] = NULL;
	
	Localitate **lo2 = new Localitate*[5];
	lo2[0] = new Capitala("Franta", 50, "Paris", 2148000, 9000);
	lo2[1] = new Localitate("Marsilia", 861635, 6000);
	lo2[2] = new Oras(25, "Nisa", 342522, 5500);
	lo2[3] = new Municipiu("Corsica", 30, "Bastia", 44070, 4500);
	lo2[4] = NULL;
	
	Localitate **lo3 = new Localitate*[5];
	lo3[0] = new Capitala("Austria", 45, "Viena", 1897000, 7500);
	lo3[1] = new Oras(35, "Salzburg", 152367, 6500);
	lo3[2] = NULL;
	
	Localitate **lo4 = new Localitate*[5];
	lo4[0] = new Localitate("Praga", 1309000, 7600);
	lo4[1] = NULL;
	
	Localitate **lo5 = new Localitate*[5];
	lo5[0] = new Capitala("Norvegia", 70, "Oslo", 681067, 8500);
	lo5[1] = new Localitate("Bergen", 271949, 5400);
	lo5[2] = new Oras(15, "Stavanger", 130754, 4500);
	lo5[3] = NULL;
	
	Tara **tara = new Tara*[5];
	tara[0] = new Tara(lo1);
	tara[1] = new Tara(lo2);
	tara[2] = new Tara(lo3);
	tara[3] = new Tara(lo4);
	tara[4] = new Tara(lo5);
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = i+1; j < 5; j++)
		{
	
			if(tara[i]->total_locuitori() > tara[j]->total_locuitori())
			{
	 			Tara *aux;
				aux = tara[i];
				tara[i] = tara[j];
				tara[j] = aux;
	 		}
	 	}
	}
	
	cout << "...TARILE SORTATE IN FUNCTIE DE NR LOCUITORI..." << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << ".....TARA "<< i+1 << "......" << endl;
		cout << "<<<<< Nr.locuitori:" << tara[i]->total_locuitori()  << " >>>>>" << endl;
		tara[i]->afisare();
		cout << endl;
	}
	
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = i+1; j < 5; j++)
		{
			
			if(tara[i]->medie_venit() > tara[j]->medie_venit())
			{
	 			Tara *aux;
				aux = tara[i];
				tara[i] = tara[j];
				tara[j] = aux;
	 		}
	 	}
	}
	
	cout << "...TARILE SORTATE IN FUNCTIE DE VENIT..." << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << ".....TARA "<< i+1 << "......" << endl;
		cout << "<<<<< Venit mediu:" << tara[i]->medie_venit()  << " >>>>>" << endl;
		tara[i]->afisare();
		cout << endl;
	}	
	return 1;
}
	
	
