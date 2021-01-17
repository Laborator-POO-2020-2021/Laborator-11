#include "localitate.hpp"
#include "tara.hpp"
#include "oras.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"

int main()
{
    Tara* country;
    Localitate **romania, **italia, **spania, **germania, **olanda;
    romania = new Localitate *[5];
    italia = new Localitate *[3];
    spania = new Localitate *[4];
    germania = new Localitate *[5];
    olanda = new Localitate *[4];

    romania[0] = new Localitate("Horezu", 6000, 4000);
    romania[1] = new Oras("Valcea", 30000, 5000, 300);
    romania[2] = new Municipiu("Ramnic", 33000, 3500, 200, "Oltenia");
    romania[3] = new Capitala("Bucuresti", 50000, 10000, 300, "Romania");    
    romania[4] = NULL;

    italia[0] = new Localitate("Venetia", 100000, 5600);    
    italia[1] = new Capitala("Roma", 400000, 8400, 2000, "Italia");    
    italia[2] = NULL;

    spania[0] = new Localitate("Barcelona", 10000, 4000);
    spania[1] = new Oras("Toledo", 50000, 5000, 500);    
    spania[2] = new Capitala("Madrid", 80000, 6000, 1000, "Spania");    
    spania[3] = NULL;

    germania[0] = new Localitate("Dortmund", 10000, 8000);
    germania[1] = new Oras("Nurnberg", 20100, 6000, 1200);
    germania[2] = new Municipiu("Bremen", 50000, 5000, 800,"Hamburg");
    germania[3] = new Capitala("Berlin", 80000, 5020, 600, "Germania");    
    germania[4] = NULL;

    olanda[0] = new Oras("Tilburg", 20000, 5000, 50);
    olanda[1] = new Municipiu("Eindhoven", 100000, 40000, 100, "Helmond");
    olanda[2] = new Capitala("Amsterdam",200000, 5000, 200, "Olanda");
    olanda[3] = NULL;

    Tara **v = new Tara*[5];
    v[0] = new Tara(romania);
    v[1] = new Tara(italia);
    v[2] = new Tara(spania);
    v[3] = new Tara(germania);
    v[4] = new Tara(olanda);

    

    cout << "-----VECTORUL DE TARI-----\n " << endl<<endl;
     for(int i = 0; i< 5 ; i++)     
         cout << *v[i];
     

      for(int i = 0 ; i < 4; i ++)
        for(int j = i+1 ; j < 5 ; j++)
            if(v[i]->getNumarLocuitoriTara() > v[j]->getNumarLocuitoriTara())
                {
                    country = v[i];
                    v[i] = v[j];
                    v[j] = country;
                }

    cout << endl;
    cout << "-----VECTOR SORTAT DUPA NUMAR DE LOCUITORI----- " << endl<<endl;
    for(int i = 0; i< 5 ; i++)
    {
        cout<<*v[i];
        cout<<"Numar locuitori: "<<v[i]->getNumarLocuitoriTara()<<endl;
    }   

     for(int i = 0 ; i < 4; i ++)
        for(int j = i+1 ; j < 5 ; j++)
            if(v[i]->getVenitMediuTara() < v[j]->getVenitMediuTara() )
                {
                    country = v[i];
                    v[i] = v[j];
                    v[j] = country;
                }

    cout << endl;
    cout << "-----VECTOR SORTAT DUPA VENIT-----" << endl<<endl;
    for(int i = 0; i< 5 ; i++)
    {
        cout << *v[i];
        cout << "VENITUL MEDIU ESTE " << v[i]->getVenitMediuTara()<<endl;
    }

    for (int i = 0; i < 4; i++)
        delete romania[i];
    for (int i = 0; i < 2; i++)
        delete italia[i];
    for (int i = 0; i < 3; i++)
        delete spania[i];
    for (int i = 0; i < 4; i++)
        delete germania[i];
    for (int i = 0; i < 3; i++)
        delete olanda[i];
        
    delete[] romania;
    delete[] italia;
    delete[] spania;
    delete[] germania;
    delete[] olanda;    
   
    delete []v;
    return 0;

    }
