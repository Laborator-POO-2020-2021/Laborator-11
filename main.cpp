#include "Localitate.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Tara.hpp"

int main()
{
    Localitate **v, **v1, **v2, **v3, **v4;
    Tara **t, *aux;
    int i, j;
    t = new Tara*[5];
    
    v = new Localitate*[4];
    v[0] = new Localitate("Umeda",327000,790);
    v[1] = new Oras("Osaka",2691000,2000,300);
    v[2] = new Municipiu("Tokyo",9273000,30000,4000,"Kanto");
    v[3] = NULL;
        
	v1 = new Localitate*[5];
	v1[0] = new Localitate("Sacramento",500,71);
    v1[1] = new Oras("New York",180000,2500,400);
    v1[2] = new Municipiu("San Francisco",200000,350,79,"San Francisco Bay Area");
    v1[3] = new Capitala("Washington",989998,5000,1000,"USA");
    v1[4] = NULL;
    
    v2 = new Localitate*[3];
	v2[0] = new Oras("Bicaz",20000,80,21);
    v2[1] = new Municipiu("Constanta",190000,357,51,"Dobrogea");
    v2[2] = NULL;
    
    v3 = new Localitate*[3];
	v3[0] = new Oras("Targu Neamt",18350,500,90);
    v3[1] = new Municipiu("Piatra Neamt",140000,450,60,"Moldova");
    v3[2] = NULL;
    
    v4 = new Localitate*[3];
	v4[0] = new Oras("Vidin",3301,61,33);
    v4[1] = new Municipiu("Roman",110000,370,89,"Moldova");
    v4[2] = NULL;
    
	
	t[0] = new Tara(v);
	t[1] = new Tara(v1);
	t[2] = new Tara(v2);
	t[3] = new Tara(v3);
	t[4] = new Tara(v4);
    
		
	for(i = 0; i < 4; i++)
		for(j = i + 1; j < 5; j++)
			if(t[i]->getPopulatie() > t[j]->getPopulatie())
			{
				aux = t[i];
				t[i] = t[j];
				t[j] = aux;
			}
	
	for(i = 0; i < 5; i++)
	{
		t[i]->afisare();
		cout << endl;
	}
	cout << "&&&&&&&&&&&&&&&&&&&&&&&" << endl;
	for(i = 0; i < 4; i++)
		for(j = i + 1; j < 5; j++)
			if(t[i]->getVenitMediu() > t[j]->getVenitMediu())
			{
				aux = t[i];
				t[i] = t[j];
				t[j] = aux;
			}

	for(i = 0; i < 5; i++)
	{
		t[i]->afisare();
		cout << endl;
	}
	
	for (i = 0; i < 4; i++)
        delete v[i];
    delete [] v;
    for (i = 0; i < 5; i++)
        delete v1[i];
    delete [] v1;
    for (i = 0; i < 3; i++)
        delete v2[i];
    delete [] v2;
    for (i = 0; i < 3; i++)
        delete v3[i];
    delete [] v3;
    for (i = 0; i < 3; i++)
        delete v4[i];
    delete [] v4;
    

    delete [] t;
    
	
	return 0;
	
}
