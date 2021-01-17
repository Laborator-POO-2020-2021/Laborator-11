#include "tara.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"


int main()
{
    Localitate **v_1, **v_2, **v_3, **v_4, **v_5;

    v_1 = new Localitate*[5];
    v_1[0] = new Localitate("Snagov", 17, 24);
    v_1[1] = new Oras("Voluntari", 42, 26, 2);
    v_1[2] = new Municipiu("Alexandria", 39, 21, 2, "Muntenia");
    v_1[3] = new Capitala("Bucuresti", 55, 27, 3, "Romania");
    v_1[4] = NULL;

    v_2 = new Localitate*[5];
    v_2[0] = new Localitate("Granville", 22, 50);
    v_2[1] = new Oras("Lyon", 29, 80, 7);
    v_2[2] = new Municipiu("Manche", 59, 44, 6, "Normandia");
    v_2[3] = new Capitala("Paris", 70, 70, 3, "Franta");
    v_2[4] = NULL;

    v_3 = new Localitate*[4];
    v_3[0] = new Oras("Barcelona", 66, 32, 2);
    v_3[1] = new Municipiu("La Poveda", 41, 16, 4, "Arganda");
    v_3[2] = new Capitala("Madrid", 70, 34, 2, "Spania");
    v_3[3] = NULL;

    v_4 = new Localitate*[3];
    v_4[0] = new Municipiu("Florida", 150, 30, 4, "Florida");
    v_4[1] = new Capitala("Washington", 550, 60, 7, "USA");
    v_4[2] = NULL;

    v_5 = new Localitate*[5];
    v_5[0] = new Localitate("Cromer", 53, 29);
    v_5[1] = new Oras("Oxford", 34, 55, 6);
    v_5[2] = new Municipiu("Manchester", 43, 63, 5, "North West England");
    v_5[3] = new Capitala("Londra", 170, 73, 9, "UK");
    v_5[4] = NULL;



    Tara **tari;
    tari = new Tara*[5];
    tari[0] = new Tara(v_1);
    tari[1] = new Tara(v_2);
    tari[2] = new Tara(v_3);
    tari[3] = new Tara(v_4);
    tari[4] = new Tara(v_5);

    for(int i = 0; i < 5; i++) {
        tari[i]->afisare();
        cout << "Nr. total locuitori: " << tari[i]->getNrlocuitori();
        cout << "\nVenit mediu: " << tari[i]->getVenitMediu();
        cout << endl<<endl;
    }

    //Sortare dupa nr de locuitori
    Tara *aux;
    for(int i = 0; i < 5-1; i++) {
        for(int j = 0; j < 5-i-1;j++) {
            if(tari[j]->getNrlocuitori() > tari[j+1]->getNrlocuitori()){
                aux = tari[j];
                tari[j] = tari[j+1];
                tari[j+1] = aux;
            }
        }
    }

    cout<<"\n========= Afisare tari ordonate dupa nr de locuitori=========\n\n";

    for(int i = 0; i < 5; i++) {
        tari[i]->afisare();
        cout << "Nr. total locuitori: " << tari[i]->getNrlocuitori();
        cout << endl<<endl;
    }

    //Sortare dupa venitul mediu
    for(int i = 0; i < 5-1; i++) {
        for(int j = 0; j < 5-i-1;j++) {
            if(tari[j]->getVenitMediu() > tari[j+1]->getVenitMediu()){
                aux = tari[j];
                tari[j] = tari[j+1];
                tari[j+1] = aux;
            }
        }
    }

    cout<<"\n========= Afisare tari ordonate dupa venitul mediu=========\n\n";
    for(int i = 0; i < 5; i++) {
        tari[i]->afisare();
        cout << "Venit mediu: " << tari[i]->getVenitMediu();
        cout << endl<<endl;
    }

    delete []tari;
    delete []v_1;
    delete []v_2;
    delete []v_3;
    delete []v_4;
    delete []v_5;

    return 0;
}