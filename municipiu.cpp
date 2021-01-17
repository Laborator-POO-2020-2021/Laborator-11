#include "municipiu.hpp"

Municipiu::Municipiu():Oras()
{
    regiune = NULL;
}

Municipiu::Municipiu(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *regiune):Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
    this->regiune = new char[strlen(regiune)+1];
    strcpy(this->regiune, regiune);
}

Municipiu::Municipiu(const Municipiu &obj)
{
    this->regiune = new char[strlen(obj.regiune)+1];
    strcpy(this->regiune, obj.regiune);
}

Municipiu& Municipiu::operator=(const Municipiu &obj)
{
    Localitate::operator=(obj);
    Oras::operator=(obj);

    if(obj.regiune == NULL)
        this->regiune = NULL;
    else
    {
        if(this->regiune != NULL)
            delete []this->regiune;
        this->regiune = new char[strlen(obj.regiune)+1];
        strcpy(this->regiune, obj.regiune);
    }
    return *this;
}

int Municipiu::Get_venit()
{
    return (this->venit_mediu + this->bonus_venit);
}

int Municipiu::Get_nr_locuitori()
{
    return this->nr_locuitori;
}

void Municipiu::afisare()
{
    Oras::afisare();
    cout << "Regiunea: ";
    if(this->regiune != NULL)
        cout << this->regiune << endl;
    else
        cout << "NULL" << endl;
}

Municipiu::~Municipiu()
{
    delete []regiune;
}
