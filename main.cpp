#include <iostream>
#include "Tara.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"

int main()
{
    Tara **tari = new Tara*[5];

    Localitate **loc1 = new Localitate*[5];
    loc1[0] = new Localitate("Cozieni",2000,1500);
    loc1[1] = new Oras("Pitesti",150000,3000,1000);
    loc1[2] = new Municipiu("Timisoara",300000,4500,2000,"Vest");
    loc1[3] = new Capitala("Bucuresti",2000000,7000,3000,"Romania");
    loc1[4] = NULL;
    tari[0] = new Tara(loc1);

    Localitate **loc2 = new Localitate*[5];
    loc2[0] = new Localitate("York",200000,4000);
    loc2[1] = new Municipiu("Norwich",200000,7000,3000,"Norfolk");
    loc2[2] = new Capitala("Londra",8000000,9000,5000,"Marea Britanie");
    loc2[3] = NULL;
    tari[1] = new Tara(loc2);

    Localitate **loc3 = new Localitate*[5];
    loc3[0] = new Oras("Marsilia",1500000,8000,2000);
    loc3[1] = new Capitala("Paris",2000000,10000,3000,"Franta");
    loc3[2] = NULL;
    tari[2] = new Tara(loc3);

    Localitate **loc4 = new Localitate*[5];
    loc4[0] = new Oras("Torino",90000,4000,2000);
    loc4[1] = new Capitala("Roma",2800000,7000,4000,"Italia");
    loc4[2] = NULL;
    tari[3] = new Tara(loc4);

    Localitate **loc5 = new Localitate*[5];
    loc5[0] = new Oras("Bergen",450000,8000,3000);
    loc5[1] = new Capitala("Oslo",1000000,15000,4000,"Norvegia");
    loc5[2] = NULL;
    tari[4] = new Tara(loc5);

    cout << "Tarile nesortate: " <<endl;

    for(int i=0;i<5;i++)
    {
        tari[i]->afisare();
    }

    for(int i=0; i<4;i++)
    {
        for(int j=i+1; j<5;j++)
        {
            if(tari[i]->getLocuitori() > tari[j]->getLocuitori())
            {
                Tara *x;
                x = tari[i];
                tari[i] = tari[j];
                tari[j] = x;
            }
        }
    }

    cout << "Tarile sortate dupa locuitori: " <<endl;

    for(int i=0;i<5;i++)
    {
        tari[i]->afisare();
    }

    for(int i=0; i<4;i++)
    {
        for(int j=i+1; j<5;j++)
        {
            if(tari[i]->getVenit() > tari[j]->getVenit())
            {
                Tara *x;
                x = tari[i];
                tari[i] = tari[j];
                tari[j] = x;
            }
        }
    }

    cout << "Tarile sortate dupa venit: " <<endl;

    for(int i=0;i<5;i++)
    {
        tari[i]->afisare();
    }

    return 0;
}
