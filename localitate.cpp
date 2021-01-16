#include "localitate.hpp"

Localitate::Localitate() : nume(nullptr), nr_locuitori(0), venit_mediu(0) {}

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu) : nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

Localitate::~Localitate() { delete[] this->nume; }

Localitate::Localitate(const Localitate &obj)
{
    this->nume = nullptr;
    (*this) = obj;
}

Localitate &Localitate::operator=(const Localitate &obj)
{
    if (this->nume)
        delete[] this->nume; //
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);

    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;

    return *this;
}

ostream &operator<<(ostream &out, const Localitate &obj)
{
    if (obj.nume != nullptr)
    {
        out << "Localitatea : " << obj.nume << " ||| ";
        out << "Numar locuitori : " << obj.nr_locuitori << " ||| "
            << "Venit mediu : " << obj.venit_mediu << " ||| ";
    }
    else out<<"Localitate neinregistrata ||| ";
    return out;
}
