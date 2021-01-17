#include "Municipiu.hpp"

Municipiu::Municipiu() : Oras(), regiune(NULL) {}

Municipiu::Municipiu(const char *nume, int nr_loc, int v_mediu, int bonus_v, const char *r) : 
              Oras(nume, nr_loc, v_mediu, bonus_v), Localitate(nume, nr_loc, v_mediu)
{
    this->regiune = new char[strlen(r) + 1];
    strcpy(this->regiune, r);
}
Municipiu::Municipiu(const Municipiu &obj)
{
    regiune = NULL;
    *this = obj;
}
Municipiu &Municipiu::operator=(const Municipiu &obj)
{
    Oras::operator=(obj);
    if (regiune != NULL)
        delete[] regiune;
    this->regiune = new char[strlen(obj.regiune) + 1];
    strcpy(this->regiune, obj.regiune);

    return *this;
}
void Municipiu::afisare()
{
    Oras::afisare();
    cout << "Nume regiune = ";
    if (regiune != NULL)
        cout << regiune << endl;
}
Municipiu::~Municipiu()
{
    if (regiune != NULL)
        delete[] regiune;
}