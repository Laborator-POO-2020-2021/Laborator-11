#include "Localitate.hpp"
#include "Oras.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Tara.hpp"

int main()
{
    Localitate **v1 = new Localitate *[5];
    v1[0] = new Localitate("Pitesti", 10000, 1500);
    v1[1] = new Oras("Valcea", 6000, 1400, 200);
    v1[2] = new Municipiu("Ramnicu Valcea", 5000, 1200, 200, "Oltenia");
    v1[3] = new Capitala("Bucuresti", 40000, 2000, 500, "Romania");
    v1[4] = NULL;
    Tara vec1(v1);

    Localitate **v2 = new Localitate *[3];
    v2[0] = new Municipiu("Vaslui", 5000, 1000, 100, "Moldova");
    v2[1] = new Capitala("Budapesta", 30000, 2000, 500, "Ungaria");
    v2[2] = NULL;
    Tara vec2(v2);

    Localitate **v3 = new Localitate *[3];
    v3[0] = new Localitate("Targu Jiu", 5000, 1200);
    v3[1] = new Oras("Constanta", 8000, 1600, 300);
    v3[2] = NULL;
    Tara vec3(v3);

	Localitate **v4 = new Localitate *[3];
    v4[0] = new Localitate("Prahova", 4000, 2000);
    v4[1] = new Oras("Sibiu", 3000, 1500, 200);
    v4[2] = NULL;
    Tara vec4(v4);

    Localitate **v5 = new Localitate *[4];
    v5[0] = new Localitate("Horezu", 3000, 1000);
    v5[1] = new Oras("Medgidia", 2000, 1500, 300);
    v5[2] = new Capitala("Paris", 60000, 4000,500, "Franta");
    v5[3] = NULL;
    Tara vec5(v5);

    Tara *vec = new Tara[5];
    vec[0] = vec1;
    vec[1] = vec2;
    vec[2] = vec3;
    vec[3] = vec4;
    vec[4] = vec5;
	
	cout<<"TARILE SUNT:"<<endl<<endl;

	for(int i = 0; i < 5; i++)
	{
        cout<<"TARA CU NUMARUL "<<i+1<<" ESTE:"<<endl<<endl;
		cout<<vec[i]<<endl;
	}
	cout<<"-----------------------------------------"<<endl<<endl;
	

	cout<<"SORTAREA DUPA NUMARUL DE LOCUITORI:"<<endl<<endl;
	
	Tara aux;

	for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
            if (vec[i].getLocuitori() < vec[j].getLocuitori())
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }

	for(int i = 0; i < 5; i++)
	{
        cout<<"TARA CU NUMARUL "<<i+1<<" ESTE:"<<endl<<endl;
		cout<<vec[i]<<endl;
	}
	cout<<"-----------------------------------------"<<endl<<endl;
	
	cout<<"SORTAREA DUPA VENITUL MEDIU:"<<endl<<endl;

	for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
            if (vec[i].getVenit() < vec[j].getVenit())
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }

	for(int i = 0; i < 5; i++)
	{
        cout<<"TARA CU NUMARUL "<<i+1<<" ESTE:"<<endl<<endl;
		cout<<vec[i]<<endl;
	}
	cout<<"-----------------------------------------"<<endl<<endl;
	
    return 0;
}