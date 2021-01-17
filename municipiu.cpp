#include "municipiu.h"

Municipiu :: Municipiu() : Oras(), regiune(NULL) {}

Municipiu :: Municipiu(const char *nume, int nr_locuitori, int venit_mediu
                       , int bonus_venit, const char *regiune)
                       :Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

void Municipiu :: afisare()
{
    (this)->Oras :: afisare();
    cout << endl << regiune;
}

Municipiu :: ~Municipiu()
{
    delete []regiune;
}
