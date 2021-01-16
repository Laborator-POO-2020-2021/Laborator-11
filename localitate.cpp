#include "localitate.hpp"

Localitate::Localitate()
{
    nume = nullptr;
    nr_locuitori = -1;
    venit_mediu = -1;
}
Localitate::Localitate(const char *src, int nr_locuitori, int venit_mediu)
{
    this->nume = new char[strlen(src) + 1];
    strcpy(this->nume, src);
    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}
Localitate::~Localitate() { delete[] nume; }
char *Localitate::getNume() { return this->nume; };
int Localitate::getNumarLocuitori() { return this->nr_locuitori; };
int Localitate::getVenit() { return this->venit_mediu; };
void Localitate::afisare()
{
    cout << "Localitatea " << nume << " cu " << nr_locuitori << " locuitori avand " << venit_mediu << " lei venit mediu.\n";
};