#include "capitala.h"

Capitala :: Capitala() : Oras(), tara(NULL) {}

Capitala :: Capitala(const char *nume, int nr_locuitori, int venit_mediu
                       , int bonus_venit, const char *tara)
                       :Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

char* Capitala :: getTara()
{
    return tara;
}

void Capitala :: afisare()
{
    this->Oras :: afisare();
    cout << endl << tara;
}

Capitala :: ~Capitala()
{
    delete []tara;
}
