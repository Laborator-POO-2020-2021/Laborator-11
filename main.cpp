#include <iostream>
#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Tara.hpp"
#include "Localitate.hpp"
#include "Oras.hpp"

int main() {
    Localitate **loc1;
    loc1 = new Localitate*[5];
    loc1[0] = new Localitate("Baicoi",1000,200);
    loc1[1] = new Oras("Baicoi1",1200,300,100);
    loc1[2] = new Capitala("Bucuresti",5000,300,200,"Romania");
    loc1[3] = new Municipiu("Sud-Est",500,100,200,"Buc");
    loc1[4] = NULL;

    Localitate **loc2;
    loc2 = new Localitate*[2];
    loc2[0] = new Localitate("Loc2",1300,250);
    loc2[1] = new Oras("Oras2",1230,202,120);

    Localitate **loc3;
    loc3 = new Localitate*[2];
    loc3[0] = new Localitate("Loc3",2330,330);
    loc3[1] = new Capitala("Asdadsa",1300,120,100,"Cap3");

    Localitate **loc4;
    loc4 = new Localitate*[1];
    loc4[0] = new Municipiu("dasdsa",400,210,31,"sadsa");

    Localitate **loc5;
    loc5 = new Localitate*[1];
    loc5[0] = new Municipiu("dsadsass",1300,14,30,"dsadsa");

    Tara **tari;
    tari = new Tara*[5];
    tari[0] = new Tara(loc1);
    tari[1] = new Tara(loc2);
    tari[2] = new Tara(loc3);
    tari[3] = new Tara(loc4);
    tari[4] = new Tara(loc5);

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(tari[i]->getNrLoc() > tari[j]->getNrLoc())
            {
                Tara *a;
                a = tari[i];
                tari[i] = tari[j];
                tari[j] = a;
            }
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(tari[i]->getVenit() > tari[j]->getVenit())
            {
                Tara *a;
                a = tari[i];
                tari[i] = tari[j];
                tari[j] = a;
            }
        }
    }

    for(int i=0;i<5;i++)
        tari[i]->afisare();
    return 0;
}
