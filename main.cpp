#include "localitate.hpp"
#include "oras.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

int main()
{
	Tara** v;
	Localitate** v0, ** v1, ** v2, ** v3, ** v4;

	
	v0 = new Localitate * [5];
	v0[0] = new Localitate("Bucuresti", 150, 10);
	v0[1] = new Oras("Iasi", 20, 5, 9);
	v0[2] = new Municipiu("Oradea", 60, 7, 8, "A");
	v0[3] = new Capitala("Constanta", 90, 27, 6,"RomaniaB");
	v0[4] = NULL;

	v1 = new Localitate * [5];
	v1[0] = new Localitate("Pascani", 45, 10);
	v1[1] = new Oras("Radauti", 25, 15, 19);
	v1[2] = new Municipiu("Timisoara", 65, 17, 18, "D");
	v1[3] = new Capitala("Sibiu", 93, 22, 16, "RomaniaA");
	v1[4] = NULL;

	v2 = new Localitate * [4];
	v2[0] = new Localitate("Cluj", 55, 20);
	v2[1] = new Oras("Argej", 215, 145, 109);
	v2[2] = new Municipiu("Craiova", 5, 7, 8, "C");
	v2[3] = NULL;

	v3 = new Localitate * [3];
	v3[0] = new Localitate("Roman", 15, 2);
	v3[1] = new Oras("Giurgiu", 15, 47, 38);
	v3[2] = NULL;

	v4 = new Localitate * [3];
	v4[0] = new Localitate("Timisoara", 325, 52);
	v4[1] = new Oras("Bacua", 21, 14, 9);
	v4[2] = NULL;

	v = new Tara * [5];
	v[0] = new Tara(v0);
	v[1] = new Tara(v1);
	v[2] = new Tara(v2);
	v[3] = new Tara(v3);
	v[4] = new Tara(v4);
	
	/*for (int i = 0; i < 5; i++) {
		cout << i << "." <<  endl;
		v[i]->afisareT();
	}*/
	
	Tara* aux;
	cout << endl << "--- SORTARE TARA NR LOCUITORI ---" << endl;
	
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
			if (v[i]->LocuitoriTara() > v[j]->LocuitoriTara()) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}

	for (int i = 0; i < 5; i++) {
		cout << endl << "TARA " << i << endl;
		v[i]->afisareT();
		cout << "Nr locuitoti Tara: " << v[i]->LocuitoriTara() << endl << endl;
	}

	//cout << endl << endl << " --- SORTARE TARA VENIT MEDIU ---" << endl;
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
			if (v[i]->venitTara() > v[j]->venitTara()) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}

	cout << endl << endl << "--- DETALII TARA ---" << endl << endl;
	for (int i = 0; i < 5; i++) {
		cout << "TARA " << i << "." << endl;
		v[i]->afisareT();
		cout << "Venit Mediu Tara: " << v[i]->venitTara() << endl << endl;
	}	

}