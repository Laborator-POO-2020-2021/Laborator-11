#include "tara.hpp"

int main()
{
    Tara *T = new Tara[5];

    Localitate *L1 = new Localitate("A", 100, 100);
    Localitate *O1 = new Oras("B", 200, 200, 200);
    Localitate *M1 = new Municipiu("C", 300, 300, 300, "c");
    Localitate *C1 = new Capitala("D", 400, 400, 400, "d");
    Localitate *C2 = new Capitala("E", 500, 500, 500, "e");

    T[0].adauga(L1);
    T[0].adauga(O1);
    T[0].adauga(M1);
    T[0].adauga(C1);
    T[0].adauga(C2);

    Tara T2, T3, T4, T5;

    T[1].adauga(L1);
    T[1].adauga(M1);

    T[2].adauga(L1);
    T[2].adauga(M1);
    T[2].adauga(C1);

    T[3].adauga(O1);
    T[3].adauga(C2);

    T[4].adauga(O1);
    T[4].adauga(M1);
    T[4].adauga(C1);
    T[4].adauga(C2);

    for(int i=0; i<5; i++)
    {
        cout << "\nTARA NR: " << i+1 << endl << endl;
        T[i].afisare();
    }

    Tara aux;
    for(int i=0; i<4; i++)
        for(int j=i; j<5; j++)
            if(T[i].Get_nr_locuitori() > T[j].Get_nr_locuitori())
            {
                aux = T[i];
                T[i] = T[j];
                T[j] = aux;
            }

    cout << "\nOrdonate dupa nr de locuitori:\n";
    for(int i=0; i<5; i++)
    {
        cout << "\nTARA NR: " << i+1 << endl << endl;
        T[i].afisare();
        cout << "Populatie: " << T[i].Get_nr_locuitori() << endl << endl;
    }

    for(int i=0; i<4; i++)
        for(int j=i; j<5; j++)
            if(T[i].Get_venit() < T[j].Get_venit())
            {
                aux = T[i];
                T[i] = T[j];
                T[j] = aux;
            }

    cout << "\nOrdonate dupa venit:\n";
    for(int i=0; i<5; i++)
    {
        cout << "\nTARA NR: " << i+1 << endl << endl;
        T[i].afisare();
        cout << "Venit tara: " << T[i].Get_venit() << endl << endl;
    }


    return 0;
}
