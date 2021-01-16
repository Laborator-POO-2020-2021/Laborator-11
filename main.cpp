#include "localitate.h"
#include "capitala.h"
#include "municipiu.h"
#include "oras.h"
#include "tara.h"

int main()
{
	Tara* t;
	t = new Tara[5];
	Localitate **v1;
	Localitate **v2;
	Localitate **v3;
	Localitate **v4;
	Localitate **v5;
	v1 = new Localitate * [5];
	v2 = new Localitate * [3];
	v3 = new Localitate * [2];
	v4 = new Localitate * [4];
	v5= new Localitate * [3];
	v1[0] = new Localitate("localitatea 1", 2000000, 200);
	v1[1] = new Oras(300,"localitatea2", 300, 300);
	v1[2] = new Capitala("capitala1", 300, "localitatea3", 400, 400);
	v1[3] = new Municipiu("Municipiu1", 300, "localitatea4", 500, 500);
	v1[4] = NULL;
	v2[0] = new Localitate("localitatea 5", 800, 223);
	v2[1] = new Oras(123, "localitatea6", 900, 33204);
	v2[2] = NULL;
	v3[0] = new Oras(324, "localitatea7", 12312, 54332);
	v3[1] = NULL;
	v4[0] = new Oras(300, "localitatea8", 34000, 735);
	v4[1] = new Capitala("capitala2", 328, "localitatea9", 6580, 347);
	v4[2] = new Municipiu("Municipiu2", 429, "localitatea10", 5200, 123022222);
	v4[3] = NULL;
	v5[0] = new Capitala("capitala3", 837, "localitatea11", 234444444, 657);
	v5[1] = new Municipiu("Municipiu3", 2394, "localitatea12", 32323, 936);
	v5[2] = NULL;
	//numere exagerate pentru a se vedea sortarea din ultimele doua argumente : primul este nr de locuitori iar al doilea este venitul mediu.
	//ordonarea este descrescatoarea
	t[0] = Tara(v1);
	t[1] = Tara(v2);
	t[2] = Tara(v3);
	t[3] = Tara(v4);
	t[4] = Tara(v5);
	Tara aux;
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
		{
			if (t[i].nrloc_tot() < t[j].nrloc_tot())
			{
				aux = t[i];
				t[i] = t[j];
				t[j] = aux;
			}
		}
	cout << "sortare dupa nr de loc:";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "tara" << i + 1 << "\n";
		t[i].afisare();
		cout << "\n";
		cout << "\n";
		cout << "\n";
	}
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
		{
			if (t[i].venit_tot() < t[j].venit_tot())
			{
				aux = t[i];
				t[i] = t[j];
				t[j] = aux;
			}
		}
	cout << "sortare venit:";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "tara" << i+1 << "\n";
		t[i].afisare();
		cout << "\n";
		cout << "\n";
		cout << "\n";
	}
	for (int i = 0; i < 5; i++)
		delete v1[i];
	delete []v1;
	for (int i = 0; i < 3; i++)
		delete v2[i];
	delete[]v2;
	for (int i = 0; i < 2; i++)
		delete v3[i];
	delete[]v3;
	for (int i = 0; i < 4; i++)
		delete v4[i];
	delete[]v4;
	for (int i = 0; i < 3; i++)
		delete v5[i];
	delete[]v5;
	

	delete[]t;


	return 0;

}