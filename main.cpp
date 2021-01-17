#include "tara.h"
#include "municipiu.h"
#include "capitala.h"

void sort_tari_locuitori(Tara **v, int n)
{
    Tara *aux;
    bool sorted;
    for (int i = 0; i < n - 1; i++)
    {
        sorted = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (v[j]->getLocuitori() > v[j+1]->getLocuitori())
            {
                sorted = false;
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }

        }
        if (sorted == true)
            break;
    }
}

void sort_tari_venit(Tara **v, int n)
{
    Tara *aux;
    bool sorted;
    for (int i = 0; i < n - 1; i++)
    {
        sorted = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (v[j]->getAverageWage() > v[j+1]->getAverageWage())
            {
                sorted = false;
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }

        }
        if (sorted == true)
            break;
    }
}

int main()
{
    Localitate loc1("Petrolesti", 6516, 133), loc2("Mirolei", 8454, 614), loc3("Ivory", 590, 991), loc4("Francisco", 697, 625)
        , loc5("Alfonso", 393, 892);
    Oras ors1("Otopeni", 12345, 996, 231), ors2("Pipera", 8647, 612, 789), ors3("Gregorio", 5540, 588, 641)
        , ors4("Lina", 2768, 540, 950), ors5("Quinton", 1983, 56, 375);
    Municipiu mun1("Buftea", 9465, 521, 844, "Ilfov"), mun2("Focsani", 6465, 6546, 963, "Vrancea")
        , mun3("Pasquale", 4282, 430, 242, "Edwin"), mun4("Duane", 5773, 379, 77, "Blaine")
        , mun5("Jodie", 5114, 560, 756, "Darla");
    Capitala cap1("Brasilia", 32515, 965, 45, "Brazilia"), cap2("Bucuresti", 6551, 321, 55, "Romania")
        , cap3("Ramiro", 9443, 27, 822, "Corrie"), cap4("Cedrick", 9092, 658, 972, "Granville")
        , cap5("Nina", 7541, 146, 798, "Lafayette");

    Localitate** v_loc1 = new Localitate*[5];
    Localitate** v_loc2 = new Localitate*[5];
    Localitate** v_loc3 = new Localitate*[5];
    Localitate** v_loc4 = new Localitate*[5];
    Localitate** v_loc5 = new Localitate*[5];

    v_loc1[0] = &loc1;
    v_loc1[1] = &ors1;
    v_loc1[2] = &mun1;
    v_loc1[3] = &cap1;
    v_loc1[4] = NULL;

    v_loc2[0] = &loc2;
    v_loc2[1] = &ors2;
    v_loc2[2] = &mun2;
    v_loc2[3] = &cap2;
    v_loc2[4] = NULL;

    v_loc3[0] = &loc3;
    v_loc3[1] = &ors3;
    v_loc3[2] = &mun3;
    v_loc3[3] = &cap3;
    v_loc3[4] = NULL;

    v_loc4[0] = &loc4;
    v_loc4[1] = &ors4;
    v_loc4[2] = &mun4;
    v_loc4[3] = &cap4;
    v_loc4[4] = NULL;

    v_loc5[0] = &loc5;
    v_loc5[1] = &ors5;
    v_loc5[2] = &mun5;
    v_loc5[3] = &cap5;
    v_loc5[4] = NULL;

    Tara **tari = new Tara*[5];
    tari[0] = new Tara(v_loc1);
    tari[1] = new Tara(v_loc2);
    tari[2] = new Tara(v_loc3);
    tari[3] = new Tara(v_loc4);
    tari[4] = new Tara(v_loc5);

    sort_tari_locuitori(tari, 5);
    cout << "Tari sortate dupa numar de locuitori: \n";
    for (int i = 0; i < 5; i++)
        cout << tari[i]->getName() << " " << tari[i]->getLocuitori() << " ";
    cout << endl;

    sort_tari_venit(tari, 5);
    cout << "\nTari sortate dupa venitul mediu: \n";
    for (int i = 0; i < 5; i++)
        cout << tari[i]->getName() << " "<< tari[i]->getAverageWage() << " ";
    cout << endl;

    cout << "\nDetaliile tarilor: \n";
    for (int i = 0; i < 5; i++)
    {
        tari[i]->afisare();
        cout << "---------------------------------------------------\n";
    }

    for(int i = 0; i < 5; i++)
        delete tari[i];
    delete []tari;
}
