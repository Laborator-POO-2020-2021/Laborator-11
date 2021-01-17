#include "tara.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"

void sortare_populatie(Tara ** v_tari);
void sortare_venitMediu(Tara ** v_tari);

int main()
{
    Localitate **romania, **spania, **canada, **germania, **japonia;

    romania = new Localitate*[5];
    romania[0] = new Localitate("Cluj-Napoca", 60000, 300);
    romania[1] = new Oras("Constanta", 32000, 1200, 200);
    romania[2] = new Municipiu("Curtea de Arges", 5000, 1150, 300, "Muntenia");
    romania[3] = new Capitala("Bucuresti", 3000000, 1250, 150, "Romania");
    romania[4] = NULL;

    spania = new Localitate*[4];
    spania[0] = new Capitala("Madrid", 2947272, 2000, 345, "Spania");
    spania[1] = new Municipiu("Barcelona", 545557, 3000, 170, "Catalonia");
    spania[2] = new Localitate("Valencia", 33321, 4400);
    spania[3] = NULL;

    canada = new Localitate*[3];
    canada[0] = new Capitala("Ottawa", 333400, 3000, 500, "Canada");
    canada[1] = new Localitate("Ontario", 14753, 1500);
    canada[2] = new Oras("Houston", 223544, 3254, 504);
    canada[3] = NULL;

    germania = new Localitate*[2];
    germania[0] = new Oras("Frankfurt", 384722, 3000, 450);
    germania[1] = new Municipiu("Amsterdam", 6754, 900, 100, "Randstad");
    germania[2] = NULL;

    japonia = new Localitate*[2];
    japonia[0] = new Localitate("Osaka", 475536, 5550);
    japonia[1] = new Oras("Kyoto", 800000, 5000, 500);
    japonia[2] = NULL;

    Tara ** v_tari;
    v_tari = new Tara*[5];
    v_tari[0] = new Tara(romania);
    v_tari[1] = new Tara(spania);
    v_tari[2] = new Tara(canada);
    v_tari[3] = new Tara(germania);
    v_tari[4] = new Tara(japonia);

    cout << "- - - - - - - - - - - - Detalii tari: - - - - - - - - - - - - " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << endl << "- - - - - - - - -  - - - - - - Tara " << i + 1 << "- - - - - - - - - - - - - - - -" << endl;
        v_tari[i]->afisare();
        cout << endl;
    }

    sortare_populatie(v_tari);
    cout << endl << endl << "- - - - - - - - -  Tarile sortate dupa populatie: - - - - - - - - - ";
    for(int i = 0; i < 5; i++)
    {
        cout << endl << "- - - - - - - - - - - - - - - Tara " << i + 1 << "- - - - - - - - - - - - - - - -" << endl;
        v_tari[i]->afisare();
        cout << endl;
    }

    sortare_venitMediu(v_tari);
    cout << endl << endl << "- - - - - - - - -  Tarile sortate dupa venit mediu: - - - - - - - - - ";
    for(int i = 0; i < 5; i++)
    {
        cout << endl << "- - - - - - - - - - - - - - - Tara " << i + 1 << "- - - - - - - - - - - - - - - -" << endl;
        v_tari[i]->afisare();
        cout << endl;
    }

    delete[] romania;
    delete[] spania;
    delete[] canada;
    delete[] germania;
    delete[] japonia;
    delete[] v_tari;

 }


    void sortare_populatie(Tara ** v_tari)
    {
        Tara * aux;
        for(int i = 0; i < 4; i++)
            for(int j = i + 1; j < 5; j++)
            {
                if(v_tari[i]->getNrLocTara() < v_tari[j]->getNrLocTara())
                {
                    aux = v_tari[i];
                    v_tari[i] = v_tari[j];
                    v_tari[j] = aux;
                }
            }
    }


    void sortare_venitMediu(Tara ** v_tari)
    {
        Tara * aux;
        for(int i = 0; i < 4; i++)
            for(int j = i + 1; j < 5; j++)
            {
                if(v_tari[i]->getVenitMediu() < v_tari[j]->getVenitMediu())
                {
                    aux = v_tari[i];
                    v_tari[i] = v_tari[j];
                    v_tari[j] = aux;
                }
            }
    }



