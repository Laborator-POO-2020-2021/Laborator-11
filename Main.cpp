#include "Tara.h"
#include "Localitate.h"
#include "Oras.h"
#include "Municipiu.h"
#include "Capitala.h"


int main(){
    Localitate **v0 = new Localitate*[5];
    Localitate **v1 = new Localitate*[5];
    Localitate **v2 = new Localitate*[5];
    Localitate **v3 = new Localitate*[5];
    Localitate **v4 = new Localitate*[5];
    Tara **tara = new Tara*[5];

    v0[0] = new Localitate("Loc1", 30000, 100000);
    v0[1] = new Oras("Oras1", 600000, 1000000, 10000);
    v0[2] = new Municipiu("Mun1", 800000, 900000, 20000, "regiune1");
    v0[3] = new Capitala("Cap1", 800000, 900000, 20000, "tara1");
    v0[4] = NULL;

    v1[0] = new Localitate("Loc2", 10000, 50000);
    v1[1] = new Oras("Oras2", 300000, 400000, 15000);
    v1[2] = new Municipiu("Mun2", 400000, 200000, 25000, "regiune2");
    v1[3] = new Capitala("Cap2", 300000, 150000, 23500, "tara2");
    v1[4] = NULL;

    v2[0] = new Localitate("Loc3", 300000, 900000);
    v2[1] = new Oras("Oras3", 50000, 10000, 1000);
    v2[2] = new Municipiu("Mun3", 70000, 400000, 2000, "regiune3");
    v2[3] = new Capitala("Cap3", 33000, 150000, 8000, "tara3");
    v2[4] = NULL;

    v3[0] = new Localitate("Loc1", 3000, 1000);
    v3[1] = new Oras("Oras1", 65000, 210000, 3000);
    v3[2] = new Municipiu("Mun1", 700000, 770000, 27000, "regiune3");
    v3[3] = new Capitala("Cap1", 10000, 130000, 15000, "tara3");
    v3[4] = NULL;

    v4[0] = new Localitate("Loc4", 40000, 200000);
    v4[1] = new Oras("Oras4", 120000, 440000, 6000);
    v4[2] = new Municipiu("Mun4", 1000000, 1000000, 56000, "regiune4");
    v4[3] = new Capitala("Cap4", 40000, 8000, 29000, "tara4");
    v4[4] = NULL;


    tara[0] = new Tara(v0);
    tara[1] = new Tara(v1);
    tara[2] = new Tara(v2);
    tara[3] = new Tara(v3);
    tara[4] = new Tara(v4);

    //sortarea vectorului de tari dupa locuitori:

    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 5; j++){
            if(tara[i]->getLocuitori() < tara[j]->getLocuitori()){
                //interschimbare
                Tara *aux = tara[i];
                tara[i] = tara[j];
                tara[j] = aux;
            }
        }
    }

    cout << "\nAfisarea clasamentului tarilor du[a nr de locuitori:\n=======================================\n";

    for(int i = 0; i < 5; i++){
        (*tara)->afisare();
    }


    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 5; j++){
            if(tara[i]->getVenit() < tara[j]->getVenit()){
                //interschimbare
                Tara *aux = tara[i];
                tara[i] = tara[j];
                tara[j] = aux;
            }
        }
    }

    cout << "\nAfisarea clasamentului tarilor du[a nr de locuitori:\n=======================================\n";

    for(int i = 0; i < 5; i++){
        (*tara)->afisare();
    }
    
    delete []tara;
    delete []v0;
    delete []v1;
    delete []v2;
    delete []v3;
    delete []v4;
    
    return 1;
}