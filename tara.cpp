#include "tara.hpp"

Tara::Tara() : v(nullptr){};
Tara::Tara(Localitate **src) : v(src){};
Tara::~Tara(){};
int Tara::getNumarLocuitori()
{
    int numarLocuitori = 0;
    for (int i = 0;; i++)
    {
        if (v[i] == nullptr)
            break;
        numarLocuitori += v[i]->getNumarLocuitori();
    }
    return numarLocuitori;
}
int Tara::getVenit()
{
    int venitTotal = 0, i;
    for (i = 0;; i++)
    {
        if (v[i] == nullptr)
        {
            break;
        }
        venitTotal += v[i]->getVenit();
    }
    return venitTotal / i;
}
void Tara::afisare()
{
    //cout << "\tTara continand:\n";
    for (int i = 0;; i++)
    {
        cout << "\t";
        if (v[i] == nullptr)
            break;
        v[i]->afisare();
    }
    cout << "SUMAR TARA: Total locuitori: " << this->getNumarLocuitori()
         << "pers, medie venit: " << this->getVenit()
         << "lei. \n";
}