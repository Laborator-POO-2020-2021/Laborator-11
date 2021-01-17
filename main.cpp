#include "capitala.hpp"
#include "municipiu.hpp"
#include "tara.hpp"

int main()
{

    Localitate **a = new Localitate *[5];
    a[0] = new Localitate("Calarasi", 100, 500);
    a[1] = new Oras("Maneuti", 200, 600, 100);
    a[2] = new Municipiu("Berzesti", 300, 700, 150, "Barzauti");
    a[3] = new Capitala("Cocesti", 400, 800, 150, "Romania");
    a[4] = NULL;
    Tara a1(a);

    Localitate **b = new Localitate *[3];
    b[0] = new Municipiu("Vaslui", 60, 100, 50, "Moldova");
    b[1] = new Capitala("Clinteni", 90, 600, 30, "Clintenia");
    b[2] = NULL;
    Tara b1(b);

    Localitate **c = new Localitate *[3];
    c[0] = new Localitate("Berceni", 250, 300);
    c[1] = new Oras("Ploiesti", 222, 189, 28);
    c[2] = NULL;
    Tara c1(c);

    Localitate **d = new Localitate *[4];
    d[0] = new Localitate("Alabama", 555, 626);
    d[1] = new Oras("", 333, 120, 22);
    d[2] = new Municipiu("Nasaud", 987, 654, 13, "Dobrogea");
    d[3] = NULL;
    Tara d1(d);

    Localitate **e = new Localitate *[4];
    e[0] = new Localitate("Horezu", 456, 357);
    e[1] = new Oras("Radauti", 236, 167, 15);
    e[2] = new Capitala("Basarabia", 105, 301, 20, "Romania");
    e[3] = NULL;
    Tara e1(e);

    Tara *vec = new Tara[5];
    vec[0] = a1;
    vec[1] = b1;
    vec[2] = c1;
    vec[3] = d1;
    vec[4] = e1;

    cout << "-----INITIAL-----\n\n";

    for (int i = 0; i < 5; i++)
        cout << vec[i] << endl;

    for (int i = 0; i < 4; i++)
        for (int j = i; j < 5; j++)
            if (vec[i].getVenit_mediu() < vec[j].getVenit_mediu())
            {
                Tara temp;
                temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }

    cout << "\n-----DUPA SORTARE IN FUNCTIE DE VENIT-----\n\n";

    for (int i = 0; i < 5; i++)
        cout << vec[i] << endl;

    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
            if (vec[i].getLocuitori() < vec[j].getLocuitori())
            {
                Tara temp;
                temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }

    cout << "\n-----DUPA SORTARE IN FUNCTIE DE NUMARUL DE LOCUITORI-----\n\n";

    for (int i = 0; i < 5; i++)
        cout << vec[i] << endl;

    delete[] vec;
    delete[] a, b, c, d, e;

    return 1;
}