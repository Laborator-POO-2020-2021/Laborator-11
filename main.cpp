#include "Capitala.hpp"
#include "Municipiu.hpp"
#include "Tara.hpp"


int main() {
    Localitate **loc1;
    loc1 = new Localitate *[4];
    loc1[0] = new Localitate("Timisoara", 280000, 70);
    loc1[1] = new Oras(20, "Craiova", 300000, 60);
    loc1[2] = new Municipiu("Transilvania", 50, "Cluj-Napoca", 350000, 80);
    loc1[3] = new Capitala("Romania", 100, "Bucuresti", 2000000, 120);

    Localitate **loc2;
    loc2 = new Localitate *[4];
    loc2[0] = new Localitate("Milano", 450000, 200);
    loc2[1] = new Oras(20, "Torino", 500000, 180);
    loc2[2] = new Municipiu("West", 50, "Napoli", 350000, 190);
    loc2[3] = new Capitala("Italia", 200, "Roma", 6000000, 320);

    Localitate **loc3;
    loc3 = new Localitate *[2];
    loc3[0] = new Localitate("Nice", 450000, 600);
    loc3[1] = new Oras(400, "Paris", 9000000, 380);

    Localitate **loc4;
    loc4 = new Localitate *[2];
    loc4[0] = new Localitate("Manchester", 750000, 300);
    loc4[1] = new Oras(50, "Leicester", 550000, 150);

    Localitate **loc5;
    loc5 = new Localitate *[2];
    loc5[0] = new Localitate("Munchen", 750000, 200);
    loc5[1] = new Capitala("Germania", 70, "Berlin", 8000000, 450);

    Tara a(loc1), b(loc2), c(loc3), d(loc4), e(loc5);
    Tara **tara;
    tara = new Tara *[5];
    tara[0] = &a;
    tara[1] = &b;
    tara[2] = &c;
    tara[3] = &d;
    tara[4] = &e;

    //sortare dupa nr_locuitori si afisare
    cout << "Prima afisare: " << endl;
    Tara *aux;
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
            if (tara[i]->get_nr_locuitori() > tara[j]->get_nr_locuitori()) {
                aux = tara[i];
                tara[i] = tara[j];
                tara[j] = aux;
            }
    for (int i = 0; i < 5; i++)
        tara[i]->afisare();

    //sortare dupa venit mediu si afisare
    cout << "A doua afisare: " << endl;
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
            if (tara[i]->get_venit_mediu() > tara[j]->get_venit_mediu()) {
                aux = tara[i];
                tara[i] = tara[j];
                tara[j] = aux;
            }
    for (int i = 0; i < 5; i++)
        tara[i]->afisare();

    return 0;

}
