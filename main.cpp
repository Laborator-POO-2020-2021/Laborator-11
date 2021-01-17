#include "localitate.hpp"
#include "tara.hpp"
#include "oras.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"

int main()
{
    Tara* aux;
    Localitate **v_romania, **v_usa, **v_uk, **v_germania, **v_china;
    v_romania = new Localitate *[6];
    v_usa = new Localitate *[6];
    v_germania = new Localitate *[6];
    v_uk = new Localitate *[6];
    v_china = new Localitate *[6];

    v_romania[0] = new Localitate("Onesti", 12500, 5000);
    v_romania[1] = new Oras("Bacau", 10100, 3500, 500);
    v_romania[2] = new Municipiu("Cluj", 25300, 8000, 2000, "Transilvania");
    v_romania[3] = new Capitala("Bucuresti", 55340, 8000, 3000, "Romania");
    v_romania[4] = new Oras("Brasov", 23004, 7000, 500);
    v_romania[5] = NULL;

    v_usa[0] = new Localitate("Los Angeles", 16500, 5600);
    v_usa[1] = new Oras("Chicago", 43000, 33500, 5500);
    v_usa[2] = new Municipiu("San Francisco", 254300, 17000, 5000, "WEst");
    v_usa[3] = new Capitala("Washington DC", 554340, 84000, 35000, "USA");
    v_usa[4] = new Oras("New York", 232004, 70400, 5100);
    v_usa[5] = NULL;

    v_germania[0] = new Localitate("Stuttgart", 122506, 52400);
    v_germania[1] = new Oras("Stuttgart", 102100, 33500, 5600);
    v_germania[2] = new Municipiu("Frankfurt", 253030, 80010, 2010, "Near-Some-Water");
    v_germania[3] = new Capitala("Berlin", 553340, 8000, 3000, "Germany");
    v_germania[4] = new Oras("Hamburg", 12004, 10300, 5200);
    v_germania[5] = NULL;

    v_uk[0] = new Localitate("Birmingham", 14500, 6000);
    v_uk[1] = new Oras("Liverpool", 12100, 6500, 5120);
    v_uk[2] = new Municipiu("Manchester", 252300, 8000, 2050, "Middle of the map");
    v_uk[3] = new Capitala("London", 551340, 8020, 8010, "UK");
    v_uk[4] = new Oras("Leicester", 46566, 3452, 435);
    v_uk[5] = NULL;

    v_china[0] = new Localitate("Xi'an", 1222500, 50400);
    v_china[1] = new Oras("Wuhan", 1, 8, 0);
    v_china[2] = new Municipiu("Hong Kong", 211111, 44444, 1111, "Freedom");
    v_china[3] = new Capitala("Beijing", 55233340, 100, 4, "China");
    v_china[4] = new Oras("Shanghai", 231423004, 740, 5200);
    v_china[5] = NULL;

    Tara **v = new Tara*[5];
    v[0] = new Tara(v_romania);
    v[1] = new Tara(v_uk);
    v[2] = new Tara(v_usa);
    v[3] = new Tara(v_germania);
    v[4] = new Tara(v_china);

    int n = 5;

    cout << "Tarile sunt: " << endl;
     for(int i = 0; i< n ; i++)
     {
         cout << *v[i];
     }

      for(int i = 0 ; i < n - 1; i ++)
        for(int j = i+1 ; j < n ; j++)
            if(v[i]->getNumarLocuitoriTara() > v[j]->getNumarLocuitoriTara())
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }

    cout << endl;
    cout << "Tarile sortate dupa nr locuitori: " << endl;
    for(int i = 0; i< n ; i++)
    {
        cout<<*v[i];
        cout<<"Numar locuitori: "<<v[i]->getNumarLocuitoriTara()<<endl;
    }   

     for(int i = 0 ; i < n - 1; i ++)
        for(int j = i+1 ; j < n ; j++)
            if(v[i]->getVenitMediuTara() < v[j]->getVenitMediuTara() )
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }

    cout << endl;
    cout << "Tarile sortate dupa venit: " << endl;
    for(int i = 0; i< n ; i++)
    {
        cout << *v[i];
        cout << "Venit mediu : " << v[i]->getVenitMediuTara()<<endl;
    }

    for (int i = 0; i < 5; i++)
        delete v_romania[i];
    for (int i = 0; i < 5; i++)
        delete v_uk[i];
    for (int i = 0; i < 5; i++)
        delete v_usa[i];
    for (int i = 0; i < 5; i++)
        delete v_germania[i];
    for (int i = 0; i < 5; i++)
        delete v_china[i];
    delete[] v_romania;
    delete[] v_uk;
    delete[] v_usa;
    delete[] v_germania;
    delete[] v_china;
    
    for(int i = 0 ; i < n; i++)
        delete v[i];
    delete []v;
    return 0;

    }