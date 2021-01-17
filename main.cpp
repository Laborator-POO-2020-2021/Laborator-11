#include "Tara.hpp"

void afisareDetaliiTara(Tara& tara)
{
	cout << "------------------------------" << endl;
    cout << "Tara: Romania" << endl;
    cout << "------------------------------" << endl;	
	tara.afisare();
	cout << "------------------------------" << endl;
    cout << "Nr locuitori tara: " << tara.getNrLocuitori() << endl;
    cout << "Venit mediu tara: " << tara.getVenitMediu() << endl;
    cout << "------------------------------" << endl;
}

void eliberareMemorieLocalitati(Localitate **&localitati)
{
	for(int i = 0; localitati[i] != NULL; i++)
		delete localitati[i];
	delete localitati;
	localitati = NULL;
}

int main()
{
	//Declarare tari si localitati
	Localitate **localitati_ro = new Localitate*[5];
	
	localitati_ro[0] = new Localitate("Caracal", 200, 300);
	localitati_ro[1] = new Oras("Brasov", 300, 400, 100);
	localitati_ro[2] = new Capitala("Bucuresti", 400, 500, 200, "Romania");
	localitati_ro[3] = new Municipiu("Slatina", 500, 600, 300, "Sud");
	localitati_ro[4] = NULL;
	
	Tara Romania(localitati_ro);


	Localitate **localitati_en = new Localitate*[3];
	
	localitati_en[0] = new Oras("Manchester", 600, 700, 400);
	localitati_en[1] = new Capitala("Londra", 700, 800, 500, "Anglia");
	localitati_en[2] = NULL;

	Tara Anglia(localitati_en);


	Localitate **localitati_de = new Localitate*[3];
	
	localitati_de[0] = new Localitate("Alfhausen", 800, 900);
	localitati_de[1] = new Capitala("Berlin", 900, 1000, 600, "Germania");
	localitati_de[2] = NULL;

	Tara Germania(localitati_de); 


	Localitate **localitati_il = new Localitate*[3];

	localitati_il[0] = new Municipiu("Safed", 1000, 1100, 700, "Nord");
	localitati_il[1] = new Capitala("Ierusalim", 1100, 1200, 800, "Israel");
	localitati_il[2] = NULL;

	Tara Israel(localitati_il); 


	Localitate **localitati_eg = new Localitate*[2];

	localitati_eg[0] = new Capitala("Cairo", 1200, 1300, 900, "Egypt");
	localitati_eg[1] = NULL;

	Tara Egypt(localitati_eg);


	Tara tari[5] = {Egypt, Anglia, Romania, Israel, Germania};

	//Testare metode
	afisareDetaliiTara(tari[2]);
	
	//Eliberare memorie
	eliberareMemorieLocalitati(localitati_ro);
	
	return 0;
}
