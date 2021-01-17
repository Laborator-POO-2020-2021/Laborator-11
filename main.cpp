#include "Tara.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"

int main()
{
    Localitate **localitate1;
    localitate1 = new Localitate*[5];
    localitate1[0] = new Localitate("Chiajna", 10000, 4500);
    localitate1[1] = new Oras(1000,"Urziceni", 30000, 4000);
    localitate1[2] = new Municipiu("Ialomita", 1500, "Slobozia", 55000, 5000);
    localitate1[3] = new Capitala("Romania", 2000, "Bucuresti", 2000000, 6500);
    localitate1[4] = NULL;

    Localitate **localitate2;
    localitate2 = new Localitate*[5];
    localitate2[0] = new Localitate("Weimar", 5000, 2000);
    localitate2[1] = new Oras(800,"Nurnberg", 30000, 4000);
    localitate2[2] = new Municipiu("Bavaria", 2000, "Munchen", 150000, 6500);
    localitate2[3] = new Capitala("Germania", 3000, "Berlin", 3500000, 8500);
    localitate2[4] = NULL;

    Localitate **localitate3;
    localitate3 = new Localitate*[3];
    localitate3[0] = new Municipiu("Utrecht", 200, "Utrecht", 650000, 5300);
    localitate3[1] = new Capitala("Olanda", 500, "Amsterdam", 800000, 7000);
    localitate3[2] = NULL;


    Localitate **localitate4;
    localitate4 = new Localitate*[3];
    localitate4[0] = new Localitate("Gent", 120000, 7250);
    localitate4[1] = new Oras(1500,"Bruxelles", 1250000, 6250);
    localitate4[2] = NULL;

    Localitate **localitate5;
    localitate5 = new Localitate*[4];
    localitate5[0] = new Oras(800,"Bender", 28000, 1200);
    localitate5[1] = new Municipiu("Transnistria", 300, "Tiraspol", 22000, 1500);
    localitate5[2] = new Capitala("Moldova", 1200, "chisinau", 320000, 2000);
    localitate5[3] = NULL;

    Tara **tara;
    tara = new Tara*[5];
    tara[0] = new Tara(localitate1);
    tara[1] = new Tara(localitate2);
    tara[2] = new Tara(localitate3);
    tara[3] = new Tara(localitate4);
    tara[4] = new Tara(localitate5);

    cout << "===============================================================" << endl;
    cout << "-----AFISARE INITIALA-----" << endl << endl;

    for(int i = 0; i < 5; i++) {
        cout << "Tara #" << i + 1 << endl;
        tara[i]->Write();
    }


    Tara* aux;
    for(int i = 0; i < 4; i++)
        for(int j = i + 1; j < 5; j++)
            if(tara[i]->getNrLocuitori() > tara[j]->getNrLocuitori()) {
                aux = tara[i];
                tara[i] = tara[j];
                tara[j] = aux;
            }
    cout << "===============================================================" << endl;
    cout << "-----AFISARE SORTARE NUMAR LOCUITORI-----" << endl << endl;

    for(int i = 0; i < 5; i++) {
        cout << "Tara #" << i + 1 << endl;
        tara[i]->Write();
    }


    for(int i = 0; i < 4; i++)
        for(int j = i + 1; j < 5; j++)
            if(tara[i]->getVenit() > tara[j]->getVenit()) {
                aux = tara[i];
                tara[i] = tara[j];
                tara[j] = aux;
            }
    cout << "===============================================================" << endl;
    cout << "-----AFISARE SORTARE VENIT-----" << endl << endl;

    for(int i = 0; i < 5; i++) {
        cout << "Tara #" << i + 1 << endl;
        tara[i]->Write();
    }

    delete[]localitate1;
    delete[]localitate2;
    delete[]localitate3;
    delete[]localitate4;
    delete[]localitate5;
    delete[]tara;

}