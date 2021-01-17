#include "Tara.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"

int main()
{
	Tara **v;
	Localitate **v1, **v2, **v3, **v4, **v5;
	
	v1 = new Localitate*[3];
	v1[0] = new Localitate("localitate1", 666, 6666);
	v1[1] = new Oras(500, "oras1", 7777, 4747);
	v1[2] = NULL;
	
	v2 = new Localitate*[5];
	v2[0] = new Capitala("tara2", 2500, "capitala2", 9999, 3333);
	v2[1] = new Municipiu("regiune2", 1000, "municipiu2", 5000, 10000);
	v2[2] = new Localitate("localitate2", 3500, 2500);
	v2[3] = new Oras(300, "oras2", 400, 888);
	v2[4] = NULL;
	
	v3 = new Localitate*[2];
	v3[0] = new Oras(10, "oras3", 20, 30);
	v3[1] = NULL;
	
	v4 = new Localitate*[4];
	v4[0] = new Localitate("localitate4", 800, 777);
	v4[1] = new Municipiu("regiune4", 350, "municipiu4", 5000, 1234);
	v4[2] = new Oras(100, "oras4", 1000, 10000);
	v4[3] = NULL;
	
	v5 = new Localitate*[3];
	v5[0] = new Municipiu("regiune5", 555, "municipiu5", 4444, 2222);
	v5[1] = new Localitate("localitate5", 4321,2468);
	v5[2] = NULL;
	
	v = new Tara*[5];
	v[0] = new Tara(v1);
	v[1] = new Tara(v2);
	v[2] = new Tara(v3);
	v[3] = new Tara(v4);
	v[4] = new Tara(v5);
	
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(v[i]->getTotLoc() > v[j]->getTotLoc())
			{
				Tara *aux;
				aux = v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
	
	cout << endl << "Tarile sortate dupa nr loc:" << endl;
	for(int i=0;i<5;i++)
	{
		cout << endl << "Tara " << i+1 << ", Nr loc " << v[i]->getTotLoc() << endl;
		cout << endl << "Detalii despre tara: ";
		v[i]->afisare();
		cout << "----------------------------";
	}
	
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(v[i]->getVenitMed() > v[j]->getVenitMed())
			{
				Tara *aux;
				aux = v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
	
	cout << endl << endl << "/////////////////////////////////" << endl;
	cout << endl << "Tarile sortate dupa venitu' mediu:" << endl;
	for(int i=0;i<5;i++)
	{
		cout << endl << "Tara " << i+1 << ", Nr loc " << v[i]->getVenitMed() << endl;
		cout << endl << "Detalii despre tara: ";
		v[i]->afisare();
		cout << "-------------------------------";
	}
	
	return 1;
}
