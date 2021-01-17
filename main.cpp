#include "Tara.hpp"

int main()
{
    Localitate **v1, ** v2, **v3, **v4, **v5;
    v1 = new Localitate*[5];

    v1[0] = new Localitate ("Afumati", 3, 1000);
    v1[1] = new Oras (500, "Pitesti", 40, 1000);
    v1[2] = new Municipiu ("Prahova", 600, "Campina", 50, 1500);
    v1[3] = new Capitala ("Romania", 700, "Bucuresti", 100, 2000);
    v1[4] = NULL;

    v2 = new Localitate*[5];

    v2[0] = new Localitate ("Napoli", 1, 530);
    v2[1] = new Oras (500, "Rimini", 43, 1200);
    v2[2] = new Municipiu ("Florenta", 612, "Milano", 56, 170);
    v2[3] = new Capitala ("Italia", 750, "Roma", 140, 2600);
    v2[4] = NULL;

    v3 = new Localitate*[5];

    v3[0] = new Localitate ("Valencia", 4, 400);
    v3[1] = new Oras (500, "Sevilia", 30, 900);
    v3[2] = new Municipiu ("Catalunia", 590, "Barcelona", 47, 100);
    v3[3] = new Capitala ("Spania", 690, "Madrid", 90, 1900);
    v3[4] = NULL;

    v4 = new Localitate*[5];

    v4[0] = new Localitate ("Marseille", 2, 3000);
    v4[1] = new Oras (500, "Nice", 20, 1000);
    v4[2] = new Municipiu ("Bordeaux", 610, "Lyon", 51, 2501);
    v4[3] = new Capitala ("Franta", 701, "Paris", 101, 2001);
    v4[4] = NULL;

    v5 = new Localitate*[5];

    v5[0] = new Localitate ("Coventry", 5, 499);
    v5[1] = new Oras (500, "Manchester", 39, 999);
    v5[2] = new Municipiu ("Birmingham", 599, "Bristol", 49, 1499);
    v5[3] = new Capitala ("Anglia", 699, "Londra", 99, 1999);
    v5[4] = NULL;

    Tara Romania(v1);
    Tara Italia(v2);
    Tara Spania(v3);
    Tara Franta(v4);
    Tara Anglia(v5);

    cout << "Tarile: " << endl;

    cout << "Romania:" << endl;
    Romania.afisare();
    cout << "Italia:" << endl;
    Italia.afisare();
    cout << "Spania:" << endl;
    Spania.afisare();
    cout << "Franta:" << endl;
    Franta.afisare();
    cout << "Anglia:" << endl;
    Anglia.afisare();

    Tara t[5];
    t[0] = Romania;
    t[1] = Italia;
    t[2] = Spania;
    t[3] = Franta;
    t[4] = Anglia;

    cout << "Populatiile initial: " << endl << endl;
    cout << "Romania: " << t[0].getPopulatie() << endl;
    cout << "Italia: " << t[1].getPopulatie() << endl;
    cout << "Spania: " << t[2].getPopulatie() << endl;
    cout << "Franta: " << t[3].getPopulatie() << endl;
    cout << "Anglia: " << t[4].getPopulatie() << endl;

    cout << endl;
    cout << "Populatiile dupa sortare: " << endl << endl;

    Tara aux;

    for (int i = 0; i < 5; i ++)
    {
        for (int j = i; j < 5; j ++)
        {
            if (t[i].getPopulatie() > t[j].getPopulatie())
            {
                aux = t[i];
                t[i] = t[j];
                t[j] = aux;
            }
        }
    }

    cout << t[0].getPopulatie() << endl;
    cout << t[1].getPopulatie() << endl;
    cout << t[2].getPopulatie() << endl;
    cout << t[3].getPopulatie() << endl;
    cout << t[4].getPopulatie() << endl;

    cout << endl;
    cout << "Venit inainte de sortare: " << endl << endl;

    for (int i = 0; i < 5; i ++)
        cout << t[i].getVenit() << endl;
    cout << endl;

    cout << endl;
    cout << "Venit dupa sortare: " << endl << endl;

    for (int i = 0; i < 5; i ++)
    {
        for (int j = i; j < 5; j ++)
        {
            if (t[i].getVenit() > t[j].getVenit())
            {
                aux = t[i];
                t[i] = t[j];
                t[j] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i ++)
        cout << t[i].getVenit() << endl;
    cout << endl;

    for (int i = 0; i < 5; i ++)
    {
        t[i].afisare();
    }


    return 0;
}
