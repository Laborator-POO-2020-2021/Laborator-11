//Barbuc Andreea 324AB
#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

int main()
{
    Tara **tari;
    tari = new Tara*[5];

	//5 obiecte de tip Tara
    Localitate ** l1 = new Localitate*[2];
    l1[0] = new Municipiu("Ploiesti", 718, 2500, 300, "Prahova");
    l1[1] = NULL;
    tari[0] = new Tara(l1);

    Localitate ** l2 = new Localitate*[3];
    l2[0] = new Localitate("Magurele", 700, 1000);
    l2[1] = new Capitala("Bucuresti", 1830000, 3000, 400, "Romania");
    l2[2] = NULL;
    tari[1] = new Tara(l2);

    Localitate **l3 = new Localitate*[4];
    l3[0] = new Localitate("Berceni", 500, 900);
    l3[1] = new Municipiu("Alexandria", 45434, 2000, 350, "Teleorman");
    l3[2] = new Municipiu("Barlad", 55837, 2000, 250, "Vaslui");
    l3[3] = NULL;
    tari[2] = new Tara(l3);

    Localitate **l4 = new Localitate*[5];
    l4[0] = new Localitate("Chatou", 14960, 3000);
    l4[1] = new Oras("Versailles", 21200, 3500, 570);
    l4[2] = new Municipiu("Yvelines", 1386927, 4000, 1200, "Île-de-France");
    l4[3] = new Capitala ("Paris", 2193031, 5000, 1700, "Franta");
    l4[4] = NULL;
    tari[3] = new Tara(l4);

    Localitate **l5 = new Localitate*[2];
    l5[0] = new Oras("Seul", 21200, 3000, 270);
    l5[1] = NULL;
    tari[4] = new Tara(l5);

    //afisare obiectelor de tip Tara 
    cout<< "Obiectele de tip Tara"<< endl<< endl;
    for(int i = 0; i < 5; i++)
    {
        cout<< "Obiectul Tara nr "<< i + 1 << ": "<< endl;
        tari[i]->afisare();
    }
    cout<< endl<< endl;

    //sortarea tarilor dupa numarul de locuitori
    Tara* aux1;
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(tari[i]->NrLocuitori() > tari[j]->NrLocuitori())
            {
                aux1 = tari[i];
                tari[i] = tari[j];
                tari[j] = aux1;
            }
        }
    }

    //afisare tarilor sortate dupa numar de locuitori si afisarea detaliilor despre fiecare tara
    cout<< "Obiectele de tip Tara sortate in functie de numarul de locuitori: "<< endl<< endl;
    for(int i = 0; i < 5; i++)
    {
        cout<< "Obiectul Tara nr "<< i + 1 << ": "<< endl;
        tari[i]->afisare();
    }
    cout<< endl<< endl;

    //sortarea tarilor dupa venitul mediu
    Tara* aux2;
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if( tari[i]->VenitMediu() > tari[j]->VenitMediu())
            {
                aux2 = tari[i];
                tari[i] = tari[j];
                tari[j] = aux2;
            }
        }
    }

    //afisare tarilor sortate dupa venitul mediu si afisarea detaliilor despre fiecare tara
    cout<< "Obiectele de tip Tara sortate in functie de venitul mediu: "<< endl<< endl;
    for(int i = 0; i < 5; i++)
    {
        cout<< "Obiectul Tara nr "<< i + 1 << ": "<< endl;
        tari[i]->afisare();
    }
    cout<< endl<< endl;
	
    delete[] l1;
    delete[] l2;
    delete[] l3;
    delete[] l4;
    delete[] l5;
    
    return 1;
}
