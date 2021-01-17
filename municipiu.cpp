
#include "municipiu.hpp"

Municipiu::Municipiu(): Oras(), regiune(NULL) {}

Municipiu::Municipiu(const char * nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char * regiune):
     Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);

}

void Municipiu::afisare()
{
    Oras::afisare();
    cout << ". Regiune: " << regiune;
}

Municipiu::~Municipiu()
{
    delete[] regiune;
}
