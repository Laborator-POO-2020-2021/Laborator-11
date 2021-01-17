#include "Tara.hpp"
#include "Capitala.hpp"
#include "Municipiu.hpp"

int main()
{
    Localitate **loc1 = new Localitate *[5];
    loc1[0] = new Capitala("Bucuresti", 1800000, 2300, 500, "Romania");
    loc1[1] = new Municipiu("Iasi", 400000, 1400, 400, "Moldova");
    loc1[2] = new Oras("Bicaz", 6500, 300, 20);
    loc1[3] = new Localitate("Rupea", 5000, 300);
    loc1[4] = NULL;
    Tara tara1(loc1);

    Localitate **loc2 = new Localitate *[3];
    loc2[0] = new Capitala("Amsterdam", 850000, 2900, 600, "Olanda");
    loc2[1] = new Oras("Nijmegen", 170000, 2100, 300);
    loc2[2] = NULL;
    Tara tara2(loc2);

    Localitate **loc3 = new Localitate *[3];
    loc3[0] = new Capitala("Paris", 2200000, 4000, 800, "Franta");
    loc3[1] = new Municipiu("Bordeaux", 1100000, 3500, 600, "Aquitania");
    loc3[2] = new Oras("Amiens", 120000, 2100, 300);
    loc3[3] = NULL;
    Tara tara3(loc3);

    Localitate **loc4 = new Localitate *[3];
    loc4[0] = new Capitala("Dublin", 1300000, 3000, 500, "Irlanda");
    loc4[1] = NULL;
    Tara tara4(loc4);

    Localitate **loc5 = new Localitate *[3];
    loc5[0] = new Capitala("Madrid", 3200000, 4000, 800, "Spania");
    loc5[1] = new Oras("Alicante", 300000, 2100, 400);
    loc5[2] = NULL;
    Tara tara5(loc5);

    int n = 5;
    Tara *v = new Tara[n];
    v[0] = tara1;
    v[1] = tara2;
    v[2] = tara3;
    v[3] = tara4;
    v[4] = tara5;

    //sortarea tarilor dupa numarul de locuitori(crescator)
    Tara temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i].getNrLocuitori() > v[j].getNrLocuitori())
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
    cout << "\tTarile sortate crescator in functie de NR. LOCUITORI\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\nTARA " << i + 1 << endl;
        cout << "Nr. locuitori tara = " << v[i].getNrLocuitori();
        v[i].afisare();
    }
    cout << endl;

    //sortarea tarilor dupa venitul mediu (descrescator)
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i].getVenit() < v[j].getVenit())
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
    cout << "\tTarile sortate descrescator in functie de VENITUL MEDIU\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\nTARA " << i + 1 << endl;
        cout << "Venit mediu tara = " << v[i].getVenit();
        v[i].afisare();
    }
    cout << endl;

    //eliberarea memoriei
    delete[] loc1;
    delete[] loc2;
    delete[] loc3;
    delete[] loc4;
    delete[] loc5;
    delete[] v;
    
    return 1;
}