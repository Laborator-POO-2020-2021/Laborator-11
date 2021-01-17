#include "Tara.hpp"

int main()
{
	Localitate **localitati_ro;
	localitati_ro = new Localitate*[5];
	
	localitati_ro[0] = new Localitate("Caracal", 200, 300);
	localitati_ro[1] = new Oras("Brasov", 300, 400, 100);
	localitati_ro[2] = new Capitala("Bucuresti", 400, 500, 200, "Romania");
	localitati_ro[3] = new Municipiu("Slatina", 500, 600, 300, "Olt");
	localitati_ro[4] = NULL;
	
	cout << "------------------------------" << endl;
    cout << "Tara: Romania" << endl;
    cout << "------------------------------" << endl;	
	Tara Romania(localitati_ro);
	Romania.afisare();
}
