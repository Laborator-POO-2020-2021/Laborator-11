#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

int main()
{
    Tara **obj;
    obj = new Tara*[5];

    Localitate **loc;
    loc = new Localitate*[4];

    loc[0] = new Localitate("Marasesti", 10000, 1500);
    loc[1] = new Oras(1000, "Panciu", 7600, 1800);
    loc[2] = new Municipiu("Moldova", 1200, "Focsani", 79000, 1800);
    loc[3] = new Capitala("Romania", 1500, "Bucuresti", 1880000, 2500);

    obj[0] = new Tara(loc);

    loc = new Localitate*[4];

    loc[0] = new Localitate("Localitate 1", 1, 25);
    loc[1] = new Oras(1000, "Oras 1", 4, 48);
    loc[2] = new Municipiu("Regiune 1", 1200, "Municipiu 1", 2, 12);
    loc[3] = new Capitala("Tara 1", 1500, "Capitala 1", 5, 20);

    obj[1] = new Tara(loc);

    loc = new Localitate*[4];

    loc[0] = new Localitate("Localitate 2", 1, 121);
    loc[1] = new Oras(1000, "Oras 2", 2, 81);
    loc[2] = new Municipiu("Regiune 2", 1200, "Municipiu 2", 1, 100);
    loc[3] = new Capitala("Tara 2", 1500, "Capitala 2", 1, 169);

    obj[2] = new Tara(loc);

    loc = new Localitate*[4];

    loc[0] = new Localitate("Localitate 3", 0, 5);
    loc[1] = new Oras(1000, "Oras 3", 0, 9);
    loc[2] = new Municipiu("Regiune 3", 1200, "Municipiu 3", 1, 14);
    loc[3] = new Capitala("Tara 3", 1500, "Capitala 3", 0, 22);

    obj[3] = new Tara(loc);

    loc = new Localitate*[4];

    loc[0] = new Localitate("Localitate 4", 4, 1624);
    loc[1] = new Oras(1000, "Oras 4", 5, 2205);
    loc[2] = new Municipiu("Regiune 4", 1200, "Municipiu 4", 5, 1898);
    loc[3] = new Capitala("Tara 4", 1500, "Capitala 4", 2, 2002);

    obj[4] = new Tara(loc);

    /*for(int i = 0; i < 5; i++)
    {
        cout << "TARA " << i + 1 << endl;
        obj[i]->afisare();
        cout << endl;
    }*/

    cout << "SORTARE DUPA NUMARUL DE LOCUITORI\n" << endl;
    for(int i = 0; i < 4; i++)
        for(int j = i+1; j < 5; j++)
            if(obj[i]->getNr_locuitori() > obj[j]->getNr_locuitori())
            {
                Tara *aux = obj[i];
                obj[i] = obj[j];
                obj[j] = aux;
            }
    for(int i = 0; i < 5; i++)
    {
        cout << "Tara " << i + 1 << "-------" << endl;
        obj[i]->afisare();
    }

    cout << "\nSORTARE DUPA VENITUL MEDIU\n" << endl;
    for(int i = 0; i < 4; i++)
        for(int j = i+1; j < 5; j++)
            if(obj[i]->getVenit_mediu() > obj[j]->getVenit_mediu())
            {
                Tara *aux = obj[i];
                obj[i] = obj[j];
                obj[j] = aux;
            }
    for(int i = 0; i < 5; i++)
    {
        cout << "Tara " << i + 1 << "-------" << endl;
        obj[i]->afisare();
    }

    delete[] loc;

    return 0;
}
