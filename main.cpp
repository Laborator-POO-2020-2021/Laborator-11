#include "tara.hpp"
#include "capitala.hpp"
#include "munincipiu.hpp"

void sort_by_population(Tara *tari, int n)
{
    Tara aux;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (tari[i].get_populatie() < tari[j].get_populatie())
            {
                aux = tari[i];
                tari[i] = tari[j];
                tari[j] = aux;
            }
}

void sort_by_income(Tara *tari, int n)
{
    Tara aux;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (tari[i].get_venit() < tari[j].get_venit())
            {
                aux = tari[i];
                tari[i] = tari[j];
                tari[j] = aux;
            }
}

int main()
{
    Tara *tari = new Tara[5];

    Localitate **v1 = new Localitate *[5];
    v1[0] = new Localitate("Medgidia", 10000, 1500);
    v1[1] = new Oras("Craiova", 50000, 2500, 250);
    v1[2] = new Capitala("Bucuresti", 1000000, 4000, 1000, "Romania");
    v1[3] = new Munincipiu("Constanta", 30000, 3000, 200, "Dobrogea");
    v1[4] = NULL;
    Tara t1(v1);

    Localitate **v2 = new Localitate *[5];
    v2[0] = new Localitate("Karliston", 40000, 3500);
    v2[1] = new Oras("Liverpool", 70000, 6500, 1250);
    v2[2] = new Capitala("Londra", 10000000, 3000, 1500, "Anglia");
    v2[3] = new Munincipiu("Manchester", 50000, 8000, 2200, "Bristol");
    v2[4] = NULL;
    Tara t2(v2);

    Localitate **v3 = new Localitate *[5];
    v3[0] = new Localitate("Lion", 10000, 500);
    v3[1] = new Oras("Nice", 50000, 2500, 250);
    v3[2] = new Capitala("Paris", 20000000, 5000, 100, "Franta");
    v3[3] = new Munincipiu("Corsica", 30000, 4000, 1200, "Mediterana");
    v3[4] = NULL;
    Tara t3(v3);

    Localitate **v4 = new Localitate *[5];
    v4[0] = new Localitate("Barcelona", 350000, 6700);
    v4[1] = new Oras("Sagaduza", 50000, 500, 550);
    v4[2] = new Capitala("Madrid", 1550000, 5000, 3100, "Spania");
    v4[3] = new Munincipiu("Tenerife", 6000, 2000, 500, "Atlantic");
    v4[4] = NULL;
    Tara t4(v4);

    Localitate **v5 = new Localitate *[5];
    v5[0] = new Localitate("Napoli", 1000, 500);
    v5[1] = new Oras("Palermo", 50000, 2000, 350);
    v5[2] = new Capitala("Roma", 1400000, 6000, 500, "Italia");
    v5[3] = new Munincipiu("Sardinia", 35000, 3200, 500, "Mediterana");
    v5[4] = NULL;
    Tara t5(v5);

    tari[0] = t1;
    tari[1] = t2;
    tari[2] = t3;
    tari[3] = t4;
    tari[4] = t5;

    cout << "\nORDINEA DUPA POPULATIE A TARILOR:\n\n";

    sort_by_population(tari, 5);

    for (int i = 0; i < 5; i++)
        cout << tari[i] << endl;

    cout << "\nORDINEA DUPA VENIT A TARILOR:\n\n";

    sort_by_income(tari, 5);

    for (int i = 0; i < 5; i++)
        cout << tari[i] << endl;
}