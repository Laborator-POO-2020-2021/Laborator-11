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
	v1[0] = new Localitate("localitatea 1", 200, 200);
	v1[1] = new Oras(300,"localitatea2", 300, 300);
	v1[2] = new Capitala("capitala1", 300, "localitatea3", 400, 400);
	v1[3] = new Municipiu("Municipiu1", 300, "localitatea4", 500, 500);
	v1[4] = NULL;
	v2[0] = new Localitate("localitatea 5", 5454, 223);
	v2[1] = new Oras(123, "localitatea6", 4343, 3320);
	v2[2] = NULL;
	v3[0] = new Oras(324, "localitatea7", 12312, 54332);
	v3[1] = NULL;
	v4[0] = new Oras(300, "localitatea8", 932, 735);
	v4[1] = new Capitala("capitala2", 328, "localitatea9", 658, 347);
	v4[2] = new Municipiu("Municipiu2", 429, "localitatea10", 347, 1230);
	v4[3] = NULL;
	v5[0] = new Capitala("capitala3", 837, "localitatea11", 234, 657);
	v5[1] = new Municipiu("Municipiu3", 2394, "localitatea12", 323, 936);
	v5[2] = NULL;

	t[0] = Tara(v1);
	t[1] = Tara(v2);
	t[2] = Tara(v3);
	t[3] = Tara(v4);
	t[4] = Tara(v5);
	cout << "sortare dupa nr de loc:";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		t[i].sortare_nrloc();
		cout << "tara" << i+1<< "\n";
		t[i].afisare();
		cout << "\n";
		cout << "\n";
		cout << "\n";
	}
	for (int i = 0; i < 5; i++)
	{
		
		t[i].sortare_venit();
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