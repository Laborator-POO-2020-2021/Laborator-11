//      g++ main.cpp localitate.cpp oras.cpp municipiu.cpp capitala.cpp tara.cpp -o program
//      ./program
//SPINU ANDREI 323AB

#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

void sortare_populatie (Tara *, int);
void sortare_venit (Tara *, int);

int main(){
   
   Localitate **a = new Localitate *[5];
    a[0] = new Localitate("Tulcea", 100, 200);
    a[1] = new Oras("Constanta", 300, 400, 500);
    a[2] = new Municipiu("Brasov", 500, 700, 900, "aaa");
    a[3] = new Capitala("Galati", 400, 800, 350, "bbb");
    a[4] = NULL;
    
    Localitate **b = new Localitate *[4];
    b[0] = new Municipiu("Bacau", 150, 500, 900, "ccc");
    b[1] = new Capitala("Pitesti", 750, 700, 320, "mmm");
    b[1] = new Oras("Braila", 100, 200, 500);
    b[3] = NULL;
    
    Localitate **c = new Localitate *[4];
    c[0] = new Localitate("Timisoara", 308, 508);
    c[1] = new Oras("Iasi", 330, 713, 450);
    c[2] = new Municipiu("Mures", 150, 500, 900, "ceva");
    c[3] = NULL;

    Localitate **d = new Localitate *[4];
    d[0] = new Localitate("Oradea", 856, 835);
    d[1] = new Oras("Ploiesti", 491, 591, 626);
    d[2] = new Municipiu("Sighisoara", 957, 748, 168, "orice");
    d[3] = NULL;
    
    Localitate **e = new Localitate *[4];
    e[0] = new Localitate("Fagarsi", 670, 406);
    e[1] = new Oras("Medias", 879, 228, 628);
    e[2] = new Capitala("Bucuresti", 351, 112, 586, "altceva");
    e[3] = NULL;
    Tara nr5(e);

    Tara nr1(a);
    Tara nr2(b);
    Tara nr3(c);
    Tara nr4(d);

    Tara *arry = new Tara[5];
    
    arry[0] = nr1;
    arry[1] = nr2;
    arry[2] = nr3;
    arry[3] = nr4;
    arry[4] = nr5;

    //afisare vector
    for (int g = 0; g < 5; g++)
    {
        cout<<arry[g]<<endl;
        cout <<"Locuitori total: " << arry[g].getVenit() <<endl;
        cout <<"Venit total: " << arry[g].getVenit() <<endl;
    }

    cout<<endl;
    cout<<"==========SORTARE DUPA POPULATIE==========" <<endl;
    cout<<endl;
    sortare_populatie(arry, 5);
    for (int i = 0; i < 5; i++){
        cout << arry[i] << endl;
        cout <<"Locuitori total: " << arry[i].getVenit() <<endl;
        cout <<"Venit total: " << arry[i].getVenit() <<endl;
    }

    cout<<endl;
    cout<<"==========SORTARE DUPA VENIT==========" <<endl;
    cout<<endl;
    sortare_venit(arry, 5);
    for (int i = 0; i < 5; i++){
        cout << arry[i] << endl;
        cout <<"Locuitori total: " << arry[i].getVenit() <<endl;
        cout <<"Venit total: " << arry[i].getVenit() <<endl;
    }

    delete [] arry;
    delete [] a,b,c,d,e;

    
    return 0;
}


void sortare_populatie (Tara * tari, const int index){
    for (int i = 0; i < index - 1; i++)
        for (int j = i + 1; j < index; j++)
            if (tari[i].getLocuitori () < tari[j].getLocuitori ()){
                Tara aux;
                aux = tari[i];
                tari[i] = tari[j];
                tari[j] = aux;
            }
}

void sortare_venit (Tara * tari, int index){
    for (int i = 0; i < index-1; i++)
        for (int j = i + 1; j < index; j++)
            if (tari[i].getVenit() < tari[j].getVenit ()){
                Tara aux;
                aux = tari[i];
                tari[i] = tari[j];
                tari[j] = aux;
            }
}