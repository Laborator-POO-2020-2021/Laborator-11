//RAILEANU_VLAD-ALEXANDRU_ laborator _ 11


#include "Tara.hpp"
#include "Localitate.hpp"
#include "Oras.hpp"
#include "Capitala.hpp"
#include "Municipiu.hpp"


int main()
{
    int i,j;
    //vector de tari
    Tara **X;
    //luam 5 tari
    X = new Tara*[5];

    //vector de localitati:
    Localitate ***Y;
    Y = new Localitate**[5];

    for(i=0; i<5; i++)
    {
        Y[i] = new Localitate*[5];
    }


    //"tarile" nu sunt chiar tari, sunt scrise incorect dpdv geografic
    //fiecare v[x] va avea la final un NULL pentru a sti unde sa ne oprim
    Y[0][0] = new Localitate("Pietroasele", 5000, 1200);
    Y[0][1] = new Oras("RamnicuSarat", 60000, 1200, 200);
    Y[0][2] = new Municipiu("Buzau", 150000, 1400, 300, "Buzau");
    Y[0][3] = new Localitate("Nehoiu", 10000, 1150);
    Y[0][4] = NULL;


    Y[1][0] = new Municipiu("Craiova", 293000, 1400, 400, "Dolj");
    Y[1][1] = new Localitate("Bailesti", 21000, 900);
    Y[1][2] = new Localitate("Dabuleni", 15000, 1100);
    Y[1][3] = new Localitate("ValeaMare", 22, 500);
    Y[1][4] = NULL;

    Y[2][0] = new Capitala("Bucuresti", 1830000, 1500, 300, "Romania");
    Y[2][1] = new Oras("Ploiesti", 220000, 1300, 300);
    Y[2][2] = new Municipiu("Ploiesti", 220000, 1300, 300, "Prahova");
    Y[2][3] = new Localitate("Sinaia", 15000, 1100);
    Y[2][4] = NULL;

    Y[3][0] = new Municipiu("Houston", 2300000, 1300, 400,"Texas");
    Y[3][1] = new Oras("Dallas", 1300000, 1400, 300);
    Y[3][2] = new Municipiu("Chicago", 2700000, 1500, 400,"Illinois");
    Y[3][3] = new Oras("Columbus", 900000, 1600, 400);
    Y[3][4] = NULL;

    Y[4][0] = new Municipiu("Washington", 700000, 1500, 600, "District of Columbia");
    Y[4][1] = new Capitala("Ciudat de Mexico", 8800000, 1400, 450, "Mexico");
    Y[4][2] = new Localitate("El Paso", 600000, 1300);
    Y[4][3] = new Oras("San Antonio", 1500000, 1400, 450);
    Y[4][4] = NULL;

    for(i=0; i<5; i++)
    {
        //populez tara cu vectorul de vector de localitati
        X[i] = new Tara(Y[i]);
    }
    /*
    for(i=0; i<5; i++)
    {
        X[i]->afisare(); cout<<"Tara: #"<<i+1<<endl;
         cout<<"Pop_tara:\t"<<X[i]->getPopulatie()<<endl;
          cout<<"VM_tara:\t"<<X[i]->getVM()<<endl;
           cout<<"============================================================================="<<endl;
    }
    */

    //sortare cu buble sort functie de populatie
    Tara *cpy;
    int n= 5; //nr de tari
    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
        {
            if(X[j]->getPopulatie() > X[j+1]->getPopulatie())
            {
                cpy = X[j];
                X[j] = X[j+1];
                X[j+1] = cpy;
            }
        }

    cout<<"\n\n\n\n************ TARILE AFISATE IN FUNCTIE DE POPULATIE (CRESCATOR)  ************\n\n\n";

    for(i=0; i<5; i++)
    {
        X[i]->afisare(); cout<<"Tara: #"<<i+1<<endl;
         cout<<"Pop_tara:\t"<<X[i]->getPopulatie()<<endl;
          cout<<"VM_tara:\t"<<X[i]->getVM()<<endl;
           cout<<"============================================================================="<<endl;
    }

    //bubblesort functie de venitul mediu:d
    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
        {
            if(X[j]->getVM() > X[j+1]->getVM())
            {
                cpy = X[j];
                X[j] = X[j+1];
                X[j+1] = cpy;
            }
        }

    cout<<"\n\n\n\n************  TARILE AFISATE IN FUNCTIE DE VENITUL MEDIU (CRESCATOR)  ************\n\n\n";


    for(i=0; i<5; i++)
    {
        X[i]->afisare(); cout<<"Tara: #"<<i+1<<endl;
         cout<<"Pop_tara:\t"<<X[i]->getPopulatie()<<endl;
          cout<<"VM_tara:\t"<<X[i]->getVM()<<endl;
           cout<<"============================================================================="<<endl;
    }


    //stergem vectorul de vectori;
    for(i=0; i<n; i++)
    {
        delete []Y[i];
    }



    return 0;
}


