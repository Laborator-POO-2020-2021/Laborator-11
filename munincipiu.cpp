#include "munincipiu.hpp"

Munincipiu::Munincipiu() : Oras()
{
    this->regiune = new char[100];
    //this->regiune = NULL;
}

Munincipiu ::Munincipiu(const char *nume, const int locuitori, const int venit, const int bonus, const char *regiune) : Oras(nume, locuitori, venit, bonus)
{
    if (this->regiune != NULL)
        delete[] this->regiune;
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Munincipiu& Munincipiu::operator=(const Munincipiu &obj)
{
    if (this->regiune != NULL)
        delete[] this->regiune;
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, obj.regiune);
    if (this->nume != NULL)
        delete[] this->nume;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, obj.nume);
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;
    this->bonus_venit = obj.bonus_venit;
    return *this;
}

Munincipiu::~Munincipiu()
{
    delete[] this->regiune;
}

int Munincipiu::get_venit()
{
    return Oras::get_venit();
}

int Munincipiu::get_populatie()
{
    return Oras::get_populatie();
}

void Munincipiu::print()
{
    Oras::print();
    cout << "REGIUNE: " << this->regiune << endl;
}
