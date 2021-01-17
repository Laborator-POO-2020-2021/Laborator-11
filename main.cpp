
#include "Municipiu.cpp"
#include "Capitala.cpp"
#include "Tara.cpp"
#include <iostream>

using namespace std;

int main()
{
    Tara **Countries;
    Countries=new Tara*[5];

    //prima tara
    Localitate ** x1=new Localitate*[2];
    x1[0]=new Municipiu("Craiova", "Oltenia", 1000, 2500, 500);
    x1[1]=NULL;
    Countries[0]=new Tara(x1);

    //a doua tara
    Localitate ** x2=new Localitate*[3];
    x2[0]=new Localitate("Sebes", 1000, 100);
    x2[1]=new Capitala("Bucuresti", "Romania", 10000, 2500, 400);
    x2[2]=NULL;
    Countries[1]= new Tara(x2);

    //a treia tara
    Localitate **x3=new Localitate*[3];
    x3[0]=new Localitate("Oradea", 1500, 200);
    x3[1]=new Localitate("Brasov", 2000, 400);
    x3[2]=NULL;
    Countries[2]=new Tara(x3);

    //a patra tara
    Localitate **x4=new Localitate*[5];
    x4[0]=new Localitate("Constanta", 2300, 500);
    x4[1]=new Municipiu("Suceava", "Moldova", 3000, 2400, 120);
    x4[2]=new Oras("Buzau", 1200, 300, 3400);
    x4[3]=new Capitala ("Dublin", "Irlanda", 4500, 2300, 1700);
    x4[4]=NULL;
    Countries[3]=new Tara(x4);


    //a cincea tara
    Localitate **x5=new Localitate*[2];
    x5[0]=new Capitala("Oslo", "Norvegia", 5600, 4300, 1200);
    x5[1]=NULL;
    Countries[4]=new Tara(x5);



    //afisare tari initiale
    cout<<"=====TARI===="<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"~~~~TARA NR "<<i+1<<" ~~~~"<<endl;
        Countries[i]->afisare();
    }

    //sortarea vectorului dupa numarul de locuitori
    Tara* var;
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(Countries[i]->getNrLocuitori() > Countries[j]->getNrLocuitori())
            {
                var=Countries[i];
                Countries[i]=Countries[j];
                Countries[j]=var;
            }
        }
    }

    //afisare tari sortate dupa numar de locuitori
    cout<<"=======TARI SORTATE DUPA NUMAR DE LOCUITORI===="<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"~~~TARA NR "<<i+1<<" ~~~~"<<endl;
        Countries[i]->afisare();
    }

    //sortarea vectorului dupa venitul mediu
    Tara* aux;
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if( Countries[i]->getVenitMediu() > Countries[j]->getVenitMediu())
            {
                aux=Countries[i];
                Countries[i]=Countries[j];
                Countries[j]=aux;
            }
        }
    }

    //afisare tari sortate dupa venitul mediu
    cout<<"=====TARI SORTATE DUPA VENITUL MEDIU===="<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"~~~~ TARA NR "<<i+1<<" ~~~~"<<endl;
        Countries[i]->afisare();
    }

    delete[] x1;
    delete[] x2;
    delete[] x3;
    delete[] x4;
    delete[] x5;
    return 0;
}
