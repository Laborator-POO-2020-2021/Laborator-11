#include "tara.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"

int main()
{
    Localitate **v1 = new Localitate*[2];
    v1[0] = new Localitate("Constanta",2500,3000);
    v1[1] = NULL;
    Tara t1(v1);

    Localitate **v2 = new Localitate*[3];
    v2[0] = new Localitate("Iasi",2000,2000); 
    v2[1] = new Oras(500,"Iasi",2000,2000);
    v2[2] = NULL;
    Tara t2(v2);

    Localitate **v3 = new Localitate*[3];
    v3[0] = new Oras(300,"Cluj",3000,2000); 
    v3[1] = new Municipiu("Dobrogea",100,"Tulcea",1000,1000);
    v3[2] = NULL;
    Tara t3(v3);

    Localitate **v4 = new Localitate*[4];
    v4[0] = new Localitate("Constanta",2500,3000);
    v4[1] = new Oras(500,"Iasi",2000,2000);
    v4[2] = new Capitala("Romania",700,"Bucuresti",5000,5000);
    v4[3] = NULL;
    Tara t4(v4);

    Localitate **v5 = new Localitate*[5];
    v5[0] = new Localitate("Constanta",2500,3000);
    v5[1] = new Oras(500,"Iasi",2000,2000);
    v5[2] = new Capitala("Romania",700,"Bucuresti",5000,5000);
    v5[3] = new Municipiu("Dobrogea",100,"Tulcea",1000,1000);
    v5[4] = NULL;
    Tara t5(v5);

    Tara *t = new Tara[5];
    t[0] = t1;
    t[1] = t2;
    t[2] = t3;
    t[3] = t4;
    t[4] = t5;
    
    for (int i = 0; i < 5; i++){
        cout << t[i];
        cout << endl;
    }


    Tara aux;
    for ( int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if(t[i].Nr_loc() < t[j].Nr_loc()){
                aux = t[i];
                t[i] = t[j];
                t[j] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        cout << "tarile ordonate dupa numarul de locuitori" << endl;
        cout << t[i];
        cout << endl;
    }
    cout << endl;

    for ( int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if(t[i].Venit_m() < t[j].Venit_m()){
                aux = t[i];
                t[i] = t[j];
                t[j] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        cout << "tarile ordonate dupa venitul mediu" << endl;
        cout << t[i];
        cout << endl;
    }
    cout << endl;

    delete[] v1;
    delete[] v2;
    delete[] v3;
    delete[] v4;
    delete[] v5;
    delete[] t;

    return 1;
}
