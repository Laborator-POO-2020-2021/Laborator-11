

#include "Municipiu.hpp"

Municipiu::Municipiu():regiune(NULL) {}

Municipiu::Municipiu(char* nume, int nr_loc, int venit, int bonus, char* regiune ):Oras(nume,nr_loc,venit, bonus) {
    this->regiune = new char[strlen(regiune)+1];
    strcpy(this->regiune,regiune);
}

Municipiu::Municipiu(const Municipiu &mun) {
    this->regiune = NULL;
    *this = mun;
}

Municipiu::~Municipiu()
{
    delete []this->regiune;
}