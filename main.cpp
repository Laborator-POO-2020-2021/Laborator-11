#include "localitate.hpp"
//#include "oras.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

int main() {
	int n = 5;
	//creare vector tari
	Tara **w;
	w = new Tara*[n];
	//creare vector localitati
	Localitate ***v; 
	v = new Localitate**[n];
	for (int i=0; i<n; i++)
		v[i] = new Localitate*[5];
	//populare vector localitati - fiecare vector are la final un NULL pentru a putea opri afisarea la timp; nu am reusit sa adaug NULL-ul din constructor
	v[0][0] = new Localitate("Pitesti", 100, 250);
	v[0][1] = new Oras("Bucuresti", 120, 300, 100);
	v[0][2] = new Municipiu("Constanta", 1220, 220, 50, "Dobrogea");
	v[0][3] = new Capitala("LosAngeles", 12000, 401, 100, "SUA");
	v[0][4] = NULL;
	
	v[1][0] = new Localitate("Bruxelles", 1020, 250);
	v[1][1] = new Oras("Brasilia", 1220, 30, 10);
	v[1][2] = new Municipiu("Strasbourg", 1100, 250, 510, "Alsacia");
	v[1][3] = new Capitala("NewYorkCity", 12000, 110, 1000, "SUA");
	v[1][4] = NULL;
	
	v[2][0] = new Localitate("Ranceni", 1002, 20);
	v[2][1] = new Oras("SanMarino", 1240, 3100, 1080);
	v[2][2] = new Oras("Monaco", 120, 3030, 101);
	v[2][3] = new Capitala("Madrid", 1620, 433, 100, "Spania");
	v[2][4] = NULL;
	
	v[3][0] = new Localitate("Clinceni", 1260, 290);
	v[3][1] = new Municipiu("Fundeni", 1220, 220, 50, "Ilfov");
	v[3][2] = new Municipiu("Ploiesti", 1840, 880, 156, "Muntenia");
	v[3][3] = new Capitala("Marculesti", 7630, 521, 15, "Romania");
	v[3][4] = NULL;
	
	v[4][0] = new Localitate("Bascov", 1050, 250);
	v[4][1] = new Oras("Dumbraveni", 1210, 3040, 1001);
	v[4][2] = new Localitate("Bradu", 400, 222);
	v[4][3] = new Capitala("Varna", 12000, 401, 100, "Bulgaria");	
	v[4][4] = NULL;

	//populare vector tari
	for (int i=0; i<n; i++)
		w[i] = new Tara(v[i]);

	//sortare vector tari in functie de populatie
	Tara *aux;
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++) 
			if (w[i]->getPop() > w[j]->getPop()) {
				aux = w[i];
				w[i] = w[j];
				w[j] = aux;
			}	
			
	for (int i=0; i<n; i++){ // afisare tari sortate dupa populatie
		w[i]->afisare();
		cout << "Populatie tara " << i+1 << ": " << w[i]->getPop() << endl;
		cout << "Venit mediu tara " << i+1 << ": " << w[i]->getVenitMed() << endl << endl;
	}
	
	//sortare vector tari dupa venit 
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++) 
			if (w[i]->getVenitMed() > w[j]->getVenitMed()) {
				aux = w[i];
				w[i] = w[j];
				w[j] = aux;
			}	
	
	for (int i=0; i<n; i++){ // afisare tari sortate dupa venit
		w[i]->afisare();
		cout << "Populatie tara " << i+1 << ": " << w[i]->getPop() << endl;
		cout << "Venit mediu tara " << i+1 << ": " << w[i]->getVenitMed() << endl << endl;
	}
	
	for (int i=0; i<n; i++) {
		delete []v[i]; //stergere pointeri catre vectorii de localitati
	}
	delete []v;
	delete []w;
	return 0;
}
