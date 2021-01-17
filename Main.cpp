#include "Tara.h"


void sortare_locuitori(Tara* vect, const int buff)
{
    for (int i = 0; i < buff - 1; ++i)
    {
        for (int j = i; j < buff; ++j)
            if ((vect[i]).get_nr_locuitori() > vect[j].get_nr_locuitori())
            {
                Tara swp;
                swp = vect[i];
                vect[i] = vect[j];
                vect[j] = swp;

            }
    }
}



void sortare_venit(Tara* vect, const int buff)
{
    for (int i = 0; i < buff-1; ++i)
    {
        for (int j = i; j < buff; ++j)
            if ((vect[i]).get_venit_mediu() > vect[j].get_venit_mediu())
            {
                Tara swp;
                swp = vect[i];
                vect[i] = vect[j];
                vect[j] = swp;

            }
    }
}



int main()
{
    
    Localitate** ob0 = new Localitate * [5];
    ob0[0] = new Localitate("Sibiu", 400, 200);
    ob0[1] = new Oras("Constanta", 600, 800, 50);
    ob0[2] = new Municipiu("Cluj", 900, 600, 150, "Crisana");
    ob0[3] = new Capitala("Bucuresti", 1000, 900, 100, "Romania");
    ob0[4] = NULL;
    Tara t0(ob0);

    Localitate** ob1 = new Localitate * [4];
    ob1[0] = new Capitala("Roma", 2000, 1000, 100, "Italia");
    ob1[1] = new Localitate("Afumati", 100, 200);
    ob1[2] = new Oras("Navodari", 650, 200, 30);
    ob1[3] = NULL;
    Tara t1(ob1);

    Localitate** ob2 = new Localitate * [2];
    ob2[0] = new Municipiu("Craiova", 749, 100, 60, "Oltenia");
    ob2[1] = NULL;
    Tara t2(ob2);

    Localitate** ob3 = new Localitate * [3];
    ob3[0] = new Municipiu("Iasi", 750, 500, 40, "Moldova");
    ob3[1] = new Localitate("Baicoi", 300, 400);
    ob3[2] = NULL;
    Tara t3(ob3);

    Localitate** ob4 = new Localitate * [2];
    ob4[0] = new Capitala("Sofia", 750, 600, 80, "Bulgaria");
    ob4[1] = NULL;
    Tara t4(ob4);

    Tara* vect = new Tara[5];
    vect[0] = t0;
    vect[1] = t1;
    vect[2] = t2;
    vect[3] = t3;
    vect[4] = t4;
    

    sortare_locuitori(vect, 5);
    cout << "Sortare dupa numarul de locuitori: " << endl << endl;
    for (int i = 0; i < 5; ++i)
        cout << vect[i];
    cout << endl << endl << endl;

    sortare_venit(vect, 5);
    cout << "Sortare dupa venitul mediu: " << endl << endl;
    for (int i = 0; i < 5; ++i)
        cout << vect[i];
    cout << endl;


    for (int i = 0; i < 4; ++i)
        delete ob0[i];
    for (int i = 0; i < 3; ++i)
        delete ob1[i];
    for (int i = 0; i < 1; ++i)
        delete ob2[i];
    for (int i = 0; i < 2; ++i)
        delete ob3[i];
    for (int i = 0; i < 1; ++i)
        delete ob4[i];

    delete[] ob0;
    delete[] ob1;
    delete[] ob2;
    delete[] ob3;
    delete[] ob4;

    delete[] vect;

    return 0;
}