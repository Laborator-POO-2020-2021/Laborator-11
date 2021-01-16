#include "capitala.hpp"
#include "municipiu.hpp"
#include "tara.hpp"
#include "functions.hpp"

int main()
{
    Localitate **a = new Localitate *[5];
    a[0] = new Localitate("Pitesti", 100, 500);
    a[1] = new Oras("Onesti", 200, 600, 100);
    a[2] = new Municipiu("Berzesti", 300, 700, 150, "Dobrogea");
    a[3] = new Capitala("Cocesti", 400, 800, 150, "Romania");
    a[4] = NULL;
    Tara a1(a);

    Localitate **b = new Localitate *[3];
    b[0] = new Municipiu("Vaslui", 60, 100, 50, "Moldova");
    b[1] = new Capitala("Cicesti", 90, 600, 30, "Cici");
    b[2] = NULL;
    Tara b1(b);

    Localitate **c = new Localitate *[3];
    c[0] = new Localitate("Prahova", 250, 300);
    c[1] = new Oras("Pitesti", 222, 189, 28);
    c[2] = NULL;
    Tara c1(c);

    Localitate **d = new Localitate *[4];
    d[0] = new Localitate("Oklahoma", 555, 626);
    d[1] = new Oras("Barlad", 333, 120, 22);
    d[2] = new Municipiu("Berecht", 987, 654, 13, "Dobrogea");
    d[3] = NULL;
    Tara d1(d);

    Localitate **e = new Localitate *[4];
    e[0] = new Localitate("Horezu", 456, 357);
    e[1] = new Oras("Radauti", 236, 167, 15);
    e[2] = new Capitala("Blegesti", 105, 301, 20, "Romania");
    e[3] = NULL;
    Tara e1(e);


    Tara *vec = new Tara[5];
    vec[0] = a1;
    vec[1] = b1;
    vec[2] = c1;
    vec[3] = d1;
    vec[4] = e1;
    //cout<<"hi";
    //cout<<vec[4].getVenit_mediu();
    sortVenit(vec, 5);
    //cout<<vec[1].getVenit_mediu();
    cout<< "Sortarea dupa venit: \n\n";
    for (int i = 0; i < 5; i++)
        cout << vec[i]<<endl;
     //cout<<vec[4];

     cout<<"\n\nSortarea dupa locuitori:\n\n";
     sortLocuitori(vec,5);
     for (int i = 0; i < 5; i++)
        cout << vec[i]<<endl;

    delete [] vec;
    delete [] a,b,c,d,e;

    return 0;
}