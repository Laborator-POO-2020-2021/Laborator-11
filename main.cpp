#include "util.hpp"

#include "localitate.hpp"
#include "oras.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"
void debug();
void println();
int main()
{
	bool enableDebug = false;
	if (enableDebug)
	{
		debug();
	}
	// Creati in main 5 obiecte de tip Tara. Cel putin una din tari sa aiba o localitate, un oras, un municipiu si o capitala.
	Tara **vectorTari = new Tara *[5], *aux;
	Localitate **vectorLocalitati1, **vectorLocalitati2, **vectorLocalitati3, **vectorLocalitati4, **vectorLocalitati5;
	int numarTari = 5;
	// Vector 1 - Tara 1; - Ro
	vectorLocalitati1 = new Localitate *[5];
	vectorLocalitati1[0] = new Localitate("Popesti-Leordeni", 20, 200);
	vectorLocalitati1[1] = new Oras("Ploiesti", 30, 300, 300);
	vectorLocalitati1[2] = new Municipiu("Brasov", 40, 400, 400, "Ardeal");
	vectorLocalitati1[3] = new Capitala("Bucuresti", 100, 1000, 9000, "Romania");
	vectorLocalitati1[4] = NULL;
	vectorTari[0] = new Tara(vectorLocalitati1);
	// Vector 2 - Tara 2; - BG
	vectorLocalitati2 = new Localitate *[5];
	vectorLocalitati2[0] = new Localitate("Plodiv", 10, 100);
	vectorLocalitati2[1] = new Oras("Nesebar", 20, 200, 200);
	vectorLocalitati2[2] = new Municipiu("Varna", 30, 300, 300, "Ardeal");
	vectorLocalitati2[3] = new Capitala("Sofia", 90, 1000, 8000, "Romania");
	vectorLocalitati2[4] = NULL;
	vectorTari[1] = new Tara(vectorLocalitati2);
	// Vector 3 - Tara 3; - Vatican
	vectorLocalitati3 = new Localitate *[5];
	vectorLocalitati3[0] = new Localitate("Vatican", 130, 500);
	vectorLocalitati3[1] = NULL;
	vectorLocalitati3[2] = NULL;
	vectorLocalitati3[3] = NULL;
	vectorLocalitati3[4] = NULL;
	vectorTari[2] = new Tara(vectorLocalitati3);
	// Vector 4 - Tara 4; - Cipru
	vectorLocalitati4 = new Localitate *[5];
	vectorLocalitati4[0] = new Localitate("Cipru", 110, 300);
	vectorLocalitati4[1] = NULL;
	vectorLocalitati4[2] = NULL;
	vectorLocalitati4[3] = NULL;
	vectorLocalitati4[4] = NULL;
	vectorTari[3] = new Tara(vectorLocalitati4);
	// Vector 5 - Tara 5; - Monaco
	vectorLocalitati5 = new Localitate *[5];
	vectorLocalitati5[0] = new Localitate("Monaco", 90, 100);
	vectorLocalitati5[1] = NULL;
	vectorLocalitati5[2] = NULL;
	vectorLocalitati5[3] = NULL;
	vectorLocalitati5[4] = NULL;
	vectorTari[4] = new Tara(vectorLocalitati5);
	// Afisatati detaliile despre fiecare tara.
	println();
	// Afisare vector initial:
	cout << "Vectorul de tari initial:\n";
	for (int i = 0; i < numarTari; i++)
	{
		cout << "Tara numarul " << i + 1 << endl;
		vectorTari[i]->afisare();
	}
	println();
	// Sortati tarile dupa numarul de locuitori si afisati-le.
	for (int i = 0; i < numarTari - 1; i++)
	{
		for (int j = 0; j < numarTari - i - 1; j++)
		{
			if (vectorTari[j + 1]->getNumarLocuitori() < vectorTari[j]->getNumarLocuitori())
			{
				aux = vectorTari[j + 1];
				vectorTari[j + 1] = vectorTari[j];
				vectorTari[j] = aux;
			}
		}
	}
	// Afisare vector sortat dupa nr loc:
	cout << "Vectorul de tari sortat dupa numar locuitori:\n";
	for (int i = 0; i < numarTari; i++)
	{
		cout << "Tara numarul " << i + 1 << endl;
		vectorTari[i]->afisare();
	}
	println();
	// SSortati tarile dupa venitul mediu.
	for (int i = 0; i < numarTari - 1; i++)
	{
		for (int j = 0; j < numarTari - i - 1; j++)
		{
			if (vectorTari[j + 1]->getVenit() < vectorTari[j]->getVenit())
			{
				aux = vectorTari[j + 1];
				vectorTari[j + 1] = vectorTari[j];
				vectorTari[j] = aux;
			}
		}
	}
	// Afisare vector sortat dupa nr loc:
	cout << "Vectorul de tari sortat dupa venit:\n";
	for (int i = 0; i < numarTari; i++)
	{
		cout << "Tara numarul " << i + 1 << endl;
		vectorTari[i]->afisare();
	}
	println();
	cout << "Detaliile despre fiecare tara au fost deja afisate, anterior.\n";
	delete[] vectorLocalitati1,vectorLocalitati2,vectorLocalitati3,vectorLocalitati4,vectorLocalitati5;
	delete[] vectorTari;
	println();
	return 0;
}
void debug()
{
	for (int i = 0; i < 50; i++)
	{
		if (i == 24)
			cout << " DEBUG START ";
		cout << "=";
		if (i == 49)
			cout << "\n";
	}
	Localitate test1("Popesti-Leordeni", 20, 200);
	test1.afisare();
	Oras test2("Ploiesti", 30, 300, 300);
	test2.afisare();
	Municipiu test3("Brasov", 40, 400, 400, "Ardeal");
	test3.afisare();
	Capitala test4("Bucuresti", 100, 1000, 10000, "Romania");
	test4.afisare();
	Localitate **test5 = new Localitate *[5];
	test5[0] = new Localitate("Popesti-Leordeni", 20, 200);
	test5[1] = new Oras("Ploiesti", 30, 300, 300);
	test5[2] = new Municipiu("Brasov", 40, 400, 400, "Ardeal");
	test5[3] = new Capitala("Bucuresti", 100, 1000, 9000, "Romania");
	test5[4] = NULL;
	Tara test6(test5);
	test6.afisare();
	for (int i = 0; i < 52; i++)
	{
		if (i == 25)
			cout << " DEBUG END ";
		cout << "=";
		if (i == 51)
			cout << "\n";
	}
}
void println()
{
	for (int i = 0; i < 100; i++)
	{
		cout << "-";
	}
	cout << endl;
}