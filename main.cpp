#include "Tara.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"

int main()
{
    Tara **tari = new Tara*[5];

    Localitate **loc1 = new Localitate*[5];
    loc1[0] = new Localitate("Bals", 350, 25);
    loc1[1] = new Capitala("Bucuresti", 2000, 40, 10, "Romania");
    loc1[2] = new Municipiu("Craiova", 100, 20, 10, "Oltenia");
    loc1[3] = new Oras("Corabia", 40, 15, 5);
    loc1[4] = NULL;
    tari[0] = new Tara(loc1);

    Localitate **loc2 = new Localitate*[4];
    loc2[0] = new Capitala("Washington", 3000, 100, 50, "US");
    loc2[1] = new Municipiu("Los Angeles", 1500, 50, 30, "West Coast");
    loc2[2] = new Oras("Portland", 300, 50, 10);
    loc2[3] = NULL;
    tari[1] = new Tara(loc2);

    Localitate **loc3 = new Localitate*[4];
    loc3[0] = new Oras("Izmir", 300, 15, 5);
    loc3[1] = new Capitala("Ankara", 3000, 50, 20, "Turcia");
    loc3[2] = new Municipiu("Istanbul", 5000, 50, 30, "Bosfor");
    loc3[3] = NULL;
    tari[2] = new Tara(loc3);

    Localitate **loc4 = new Localitate*[4];
    loc4[0] = new Capitala("Rabat", 1000, 40, 30, "Maroc");
    loc4[1] = new Municipiu("Casablanca", 500, 20, 10, "Sud");
    loc4[2] = new Oras("Marrakech", 300, 20, 10);
    loc4[3] = NULL;
    tari[3] = new Tara(loc4);

    Localitate **loc5 = new Localitate*[4];
    loc5[0] = new Capitala("New Delhi", 4000, 30, 20, "India");
    loc5[1] = new Municipiu("Mumbai", 8000, 40, 20, "West");
    loc5[2] = new Oras("Bangalore", 5000, 40, 10);
    loc5[3] = NULL;
    tari[4] = new Tara(loc5);

    cout << "\n" << "-- SORTARE DUPA NR LOC --" << "\n";
    Tara *buf;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++)
            if (tari[i]->getLocuitori() < tari[j]->getLocuitori()) {
                buf = tari[i];
                tari[i] = tari[j];
                tari[j] = buf;
            }
    }
    for (int i = 0; i < 5; i++) {
        tari[i]->afisare();
        cout << "\n";
    }

    cout << "\n" << "-- SORTARE DUPA VENIT MEDIU --" << "\n";
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++)
            if (tari[i]->getVenit() < tari[j]->getVenit()) {
                buf = tari[i];
                tari[i] = tari[j];
                tari[j] = buf;
            }
    }
    for (int i = 0; i < 5; i++) {
        tari[i]->afisare();
        cout << "\n";
    }

    return 0;
}