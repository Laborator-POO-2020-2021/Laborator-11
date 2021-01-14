#include "capitala.hpp"
#include "municipiu.hpp"
#include "tara.hpp"

void sort_by_population (Tara *);

int main ()
{
    Localitate **v1 = new Localitate* [5];
    v1[0] = new Localitate ("Cluj", 300000, 500);
    v1[1] = new Oras ("Braila", 280000, 200, 50);
    v1[2] = new Municipiu ("Medgidia", 40000, 150, 100,"Dobrogea");
    v1[3] = new Capitala ("Bucuresti", 3000000, 900, 300, "Romania");
    v1[4] = NULL;
    Tara x1(v1);

    Localitate **v2 = new Localitate* [3];
    v2[0] = new Oras ("Iasi", 400000, 700, 100);
    v2[1] = new Municipiu ("Vaslui", 100000, 100, 2, "Moldova");
    v2[2] = NULL;
    Tara x2(v2);

    Localitate **v3 = new Localitate* [2];
    v3[0] = new Oras ("Constanta", 350000, 800, 100);
    v3[1] = NULL;
    Tara x3 (v3);

    Localitate **v4 = new Localitate* [3];
    v4[0] = new Oras ("Galati", 150000, 500, 20);
    v4[1] = new Municipiu ("Sf-Gheorghe", 54000, 400, 100,"Tinutul secuiesc");
    v4[2] = NULL;
    Tara x4 (v4);

    Localitate **v5 = new Localitate* [2];
    v5[0] = new Oras ("Timisoara", 375000, 650, 80);
    v5[1] = NULL;
    Tara x5 (v5);

    Tara *tari = new Tara [5];
    tari[0] = x1;
    tari[1] = x2;
    tari[2] = x3;
    tari[3] = x4;
    tari[4] = x5;

    for (int i = 0; i < 5; i++)
        cout << tari[i];

}

void sort_by_population (Tara * tari)
{

}