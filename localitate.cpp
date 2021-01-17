#include "localitate.hpp"

Localitate::Localitate() : nume(NULL), nr_locuitori(0), venit_mediu(0){}

Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu) : nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
     this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

void Localitate::afisare()
{
    cout << "Nume ";
    cout << getNume();
    cout << "; nr_locuitori: ";
    cout << getNr_locuitori();
    cout << "; Venit mediu: ";
    cout << getVenit_mediu();
    cout << "}\n";
}

int Localitate::getNr_locuitori()
{
    return nr_locuitori;
}

char *Localitate::getNume()
{
    return nume;
}

int Localitate::getVenit_mediu()
{
    return venit_mediu;
}